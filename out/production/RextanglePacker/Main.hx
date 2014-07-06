package;

import openfl.Lib;
import openfl.display.StageAlign;
import openfl.display.StageScaleMode;
import openfl.display.Bitmap;
import openfl.events.Event;
import openfl.geom.Rectangle;
import tools.ScalingBox;
import utils.RectanglePacker;
import openfl.text.TextField;
import openfl.display.Sprite;
import openfl.display.BitmapData;

/**
* Simple demo application for the RectanglePacker class.
* Should not be used as a reference for anything :)
*/
class Main extends Sprite {

    public static inline var WIDTH:Int = 480;
    public static inline var HEIGHT:Int = 480;
    public static inline var Y_MARGIN:Int = 40;
    public static inline var BOX_MARGIN:Int = 15;

    public static inline var RECTANGLE_COUNT:Int = 500;
    public static inline var SIZE_MULTIPLIER:Float = 2.0;

    private var mBitmapData:BitmapData = new BitmapData(WIDTH, HEIGHT, true, 0xFFFFFFFF);
    private var mCopyRight:TextField = new TextField();
    private var mText:TextField = new TextField();

    private var mPacker:RectanglePacker;
    private var mScalingBox:ScalingBox;

    private var mRectangles:Array<Rectangle> = new Array<Rectangle>();

	public function new () {
		
		super ();

        addEventListener(Event.ADDED_TO_STAGE, onAddedToStage);
        addEventListener(Event.ENTER_FRAME, onEnterFrame);

        var bitmap:Bitmap = new Bitmap(mBitmapData);
        addChild(bitmap);
        bitmap.x = BOX_MARGIN;
        bitmap.y = Y_MARGIN;

        mCopyRight.x = BOX_MARGIN;
        mCopyRight.y = BOX_MARGIN / 3;
        mCopyRight.width = 300;
        mCopyRight.text = "Rectangle Packer";
        addChild(mCopyRight);

        mText.x = WIDTH - 200;
        mText.y = BOX_MARGIN / 3;
        mText.width = 200;
        addChild(mText);

        mScalingBox = new ScalingBox(BOX_MARGIN, Y_MARGIN, WIDTH - (BOX_MARGIN*2), HEIGHT - (Y_MARGIN + (BOX_MARGIN*2)));
        addChild(mScalingBox);

        createRectangles();
	}

    /**
    * Create some random size rectangles to play with
    */
    private function createRectangles():Void
    {
        var width:Int;
        var height:Int;
        for (i in 0...10)
        {
            width = 20 * SIZE_MULTIPLIER + Math.floor(Math.random() * 8) * SIZE_MULTIPLIER * SIZE_MULTIPLIER;
            height = 20 * SIZE_MULTIPLIER + Math.floor(Math.random() * 8) * SIZE_MULTIPLIER * SIZE_MULTIPLIER;
            mRectangles.push(new Rectangle(0, 0, width, height));
        }

        for (j in 10...RECTANGLE_COUNT)
        {
            width = 3 * SIZE_MULTIPLIER + Math.floor(Math.random() * 8) * SIZE_MULTIPLIER;
            height = 3 * SIZE_MULTIPLIER + Math.floor(Math.random() * 8) * SIZE_MULTIPLIER;
            mRectangles.push(new Rectangle(0, 0, width, height));
        }
    }

    private function onAddedToStage(event:Event):Void
    {
        updateRectangles();
        stage.scaleMode = StageScaleMode.NO_SCALE;
        stage.align = StageAlign.TOP;
    }

    private function onEnterFrame(event:Event):Void
    {
        if (mScalingBox.boxWidth != mScalingBox.newBoxWidth || mScalingBox.boxHeight != mScalingBox.newBoxHeight)
        {
            updateRectangles();
        }
    }

    private function updateRectangles():Void
    {
        var start:Int = Lib.getTimer();
        var padding:Int = 1;

        if (mPacker == null)
        {
            mPacker = new RectanglePacker(mScalingBox.newBoxWidth, mScalingBox.newBoxHeight, padding);
        }
        else
        {
            mPacker.reset(mScalingBox.newBoxWidth, mScalingBox.newBoxHeight, padding);
        }

        for(i in 0...RECTANGLE_COUNT)
        {
            mPacker.insertRectangle(mRectangles[i].width, mRectangles[i].height, i);
        }

        mPacker.packRectangles();

        var end:Int = Lib.getTimer();

        if(mPacker.rectangleCount > 0)
        {
            mText.text = mPacker.rectangleCount + " rectangles packed in " + (end - start) + "ms";

            mScalingBox.updateBox(mScalingBox.newBoxWidth, mScalingBox.newBoxHeight);
            mBitmapData.fillRect(mBitmapData.rect, 0xFFFFFFFF);
            var rect:Rectangle = new Rectangle();
            for (j in 0...mPacker.rectangleCount)
            {
                rect = mPacker.getRectangle(j, rect);
                mBitmapData.fillRect(new Rectangle(rect.x, rect.y, rect.width, rect.height), 0xFF000000);
                var index:Int = mPacker.getRectangleId(j);
                var color:UInt = 0xFF171703 + (((18 * ((index + 4) % 13)) << 16) + ((31 * ((index * 3) % 8)) << 8) + 63 * (((index + 1) * 3) % 5));
                mBitmapData.fillRect(new Rectangle(rect.x + 1, rect.y + 1, rect.width - 2, rect.height - 2), color);
            }
        }
    }
}