package utils;

import openfl.geom.Rectangle;

class RectanglePacker {

    public static inline var VERSION:String = "1.3.0";

    private var mWidth:Int = 0;
    private var mHeight:Int = 0;
    private var mPadding:Int = 8;

    private var mPackedWidth:Int = 0;
    private var mPackedHeight:Int = 0;

    private var mInsertList:Array = [];

    private var mInsertedRectangles:Array<IntegerRectangle> = new Array<IntegerRectangle>();
    private var mFreeAreas:Array<IntegerRectangle> = new Array<IntegerRectangle>();
    private var mNewFreeAreas:Array<IntegerRectangle> = new Array<IntegerRectangle>();

    private var mOutsideRectangle:IntegerRectangle;

    private var mSortableSizeStack:Array<SortableSize> = new Array<SortableSize>();
    private var mRectangleStack:Array<IntegerRectangle> = new Array<IntegerRectangle>();

    public var rectangleCount (get, never):Int;
    function get_rectangleCount ():Int { return mInsertedRectangles.length; }

    public var packedWidth (get, never):Int;
    function get_packedWidth ():Int { return mPackedWidth; }

    public var packedHeight (get, never):Int;
    function get_packedHeight ():Int { return mPackedHeight; }

    public var padding (get, never):Int;
    function get_padding ():Int { return mPadding; }

    /**
     * Constructs new rectangle packer
     * @param width the width of the main rectangle
     * @param height the height of the main rectangle
     */
    public function new(width:Int, height:Int, padding:Int = 0) {
        mOutsideRectangle = new IntegerRectangle(width + 1, height + 1, 0, 0);
        reset(width, height, padding);
    }

    /**
     * Resets the rectangle packer with given dimensions
     * @param width
     * @param height
     */
    public function reset(width:Int, height:Int, padding:Int = 0):Void{
        while (mInsertedRectangles.length)
        {
            freeRectangle(mInsertedRectangles.pop());
        }

        while (mFreeAreas.length)
        {
            freeRectangle(mFreeAreas.pop());
        }

        mWidth = width;
        mHeight = height;

        mPackedWidth = 0;
        mPackedHeight = 0;

        mFreeAreas[0] = allocateRectangle(0, 0, mWidth, mHeight);

        while (mInsertList.length)
        {
            freeSize(mInsertList.pop());
        }

        mPadding = padding;
    }

    /**
     * Gets the position of the rectangle in given index in the main rectangle
     * @param index the index of the rectangle
     * @param rectangle an instance where to set the rectangle's values
     * @return
     */
    public function getRectangle(index:int, rectangle:Rectangle):Rectangle
    {
        var inserted:IntegerRectangle = mInsertedRectangles[index];
        if (rectangle)
        {
            rectangle.x = inserted.x;
            rectangle.y = inserted.y;
            rectangle.width = inserted.width;
            rectangle.height = inserted.height;
            return rectangle;
        }

        return new Rectangle(inserted.x, inserted.y, inserted.width, inserted.height);
    }

    /**
     * Gets the original id for the inserted rectangle in given index
     * @param index
     * @return
     */
    public function getRectangleId(index:Int):Int
    {
        var inserted:IntegerRectangle = mInsertedRectangles[index];
        return inserted.id;
    }

    /**
     * Add a rectangle to be packed into the packer
     * @width the width of inserted rectangle
     * @height the height of inserted rectangle
     * @id the identifier for this rectangle
     * @return true if inserted successfully
     */
    public function insertRectangle(width:Int, height:Int, id:Int):Void
    {
        var sortableSize:SortableSize = allocateSize(width, height, id);
        mInsertList.push(sortableSize);
    }

    /**
     * Packs the rectangles inserted
     * @param sort boolean defining whether to sort the inserted rectangles before packing
     * @return the number of the packed rectangles
     */
    public function packRectangles(sort:Bool = true):Int
    {
        if(sort)
        {
            mInsertList.sortOn("width", Array.NUMERIC);
        }

        while (mInsertList.length > 0)
        {
            var sortableSize:SortableSize = cast(mInsertList.pop(), SortableSize);
            var width:Int = sortableSize.width;
            var height:Int = sortableSize.height;

            var index:Int = getFreeAreaIndex(width, height);
            if (index >= 0)
            {
                var freeArea:IntegerRectangle = mFreeAreas[index];
                var target:IntegerRectangle = allocateRectangle(freeArea.x, freeArea.y, width, height);
                target.id = sortableSize.id;

                // Generate the new free areas, these are parts of the old ones intersected or touched by the target
                generateNewFreeAreas(target, mFreeAreas, mNewFreeAreas);

                while (mNewFreeAreas.length > 0)
                {
                    mFreeAreas[mFreeAreas.length] = mNewFreeAreas.pop();
                }

                mInsertedRectangles[mInsertedRectangles.length] = target;
                if (target.right > mPackedWidth)
                {
                    mPackedWidth = target.right;
                }
                if (target.bottom > mPackedHeight)
                {
                    mPackedHeight = target.bottom;
                }
            }

            freeSize(sortableSize);
        }

        return rectangleCount;
    }

    /**
     * Removes rectangles from the filteredAreas that are sub rectangles of any rectangle in areas.
     * @param areas rectangles from which the filtering is performed
     */
    private function filterSelfSubAreas(areas:Array<IntegerRectangle>):Void
    {
        for (var i:Int = areas.length - 1; i >= 0; i--)
        {
        var filtered:IntegerRectangle = areas[i];
        for (var j:int = areas.length - 1; j >= 0; j--)
        {
        if (i != j)
        {
        var area:IntegerRectangle = areas[j];
        if (filtered.x >= area.x && filtered.y >= area.y &&
        filtered.right <= area.right && filtered.bottom <= area.bottom)
        {
        freeRectangle(filtered);
        var topOfStack:IntegerRectangle = areas.pop();
        if (i <areas.length)
        {
        // Move the one on the top to the freed position
        areas[i] = topOfStack;
        }
        break;
        }
        }
        }
        }
    }
}
