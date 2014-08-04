package tools;

import openfl.events.MouseEvent;
import openfl.events.Event;
import openfl.display.Sprite;
import Std;
import openfl.Lib;

class ScalingBox extends Sprite {

    private var mX:Int = 0;
    private var mY:Int = 0;
    private var mWidth:Int = 0;
    private var mHeight:Int = 0;
    private var mMaxWidth:Int = 0;
    private var mMaxHeight:Int = 0;

    private var mNewWidth:Int = 0;
    private var mNewHeight:Int = 0;

    private var mDragBox:Sprite = new Sprite();
    private var mDragging:Bool = false;

    public var boxWidth (get, never):Int;
    function get_boxWidth ():Int { return mWidth; }

    public var boxHeight (get, never):Int;
    function get_boxHeight ():Int { return mHeight; }

    public var newBoxWidth (get, never):Int;
    function get_newBoxWidth ():Int { return mNewWidth; }

    public var newBoxHeight (get, never):Int;
    function get_newBoxHeight ():Int { return mNewHeight; }

    public function new(x:Int, y:Int, width:Int, height:Int) {
        super();

        mX = x;
        mY = y;

        mMaxWidth = width;
        mMaxHeight = height;

        this.x = x;
        this.y = y;

        mDragBox.graphics.beginFill(0xFF8050);
        mDragBox.graphics.drawCircle(0, 0, 10);
        mDragBox.graphics.endFill();

        addChild(mDragBox);
        mDragBox.addEventListener(MouseEvent.MOUSE_DOWN, onStartDrag);
        addEventListener(Event.ADDED_TO_STAGE, onAddedToStage);
        updateBox(width, height);
    }

    public function updateBox(width:Int, height:Int):Void
    {
        mWidth = width;
        mHeight = height;
        mNewWidth = width;
        mNewHeight = height;

        graphics.clear();
        graphics.lineStyle(1.0, 0x000000);
        graphics.drawRect(0, 0, mWidth, mHeight);

        mDragBox.x = mWidth;
        mDragBox.y = mHeight;
    }

    private function onAddedToStage(event:Event):Void
    {
        this.stage.addEventListener(MouseEvent.MOUSE_MOVE, onMouseMove);
        this.stage.addEventListener(MouseEvent.MOUSE_UP, onMouseUp);
    }

    private function onMouseUp(event:MouseEvent):Void
    {
        mDragging = false;
    }

    private function onMouseMove(event:MouseEvent):Void
    {
        if (mDragging)
		{
            mNewWidth = Std.int(event.stageX - mX);
            mNewHeight = Std.int(event.stageY - mY);
			//Lib.trace("onMouseMove: " + event.stageY +" "+ mY);
            if (mNewWidth > mMaxWidth)
            {
                mNewWidth = mMaxWidth;
            }

            if (mNewHeight > mMaxHeight)
            {
                mNewHeight = mMaxHeight;
            }
        }
    }

    private function onStartDrag(event:MouseEvent):Void
    {
        mDragging = true;
    }
}
