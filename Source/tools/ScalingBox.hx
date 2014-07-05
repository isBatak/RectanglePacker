package tools;

import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;

class ScalingBox extends Sprite {

    private var mX:Float = 0.0;
    private var mY:Float = 0.0;
    private var mWidth:Float = 0.0;
    private var mHeight:Float = 0.0;
    private var mMaxWidth:Float = 0.0;
    private var mMaxHeight:Float = 0.0;

    private var mNewWidth:Float = 0.0;
    private var mNewHeight:Float = 0.0;

    private var mDragBox:Sprite = new Sprite();
    private var mDragging:Bool = false;

    public var boxWidth (get, never):Float;
    function get_boxWidth ():Float { return mWidth; }

    public var boxHeight (get, never):Float;
    function get_boxHeight ():Float { return mHeight; }

    public var newBoxWidth (get, never):Float;
    function get_newBoxWidth ():Float { return mNewWidth; }

    public var newBoxHeight (get, never):Float;
    function get_newBoxHeight ():Float { return mNewHeight; }

    public function new(x:Float, y:Float, width:Float, height:Float) {
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

    public function updateBox(width:Float, height:Float):Void
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
            mNewWidth = event.stageX - mX;
            mNewHeight = event.stageY - mY;

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
