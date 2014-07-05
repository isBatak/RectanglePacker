package;


import openfl.display.Sprite;
import openfl.display.BitmapData;


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

    private var mRectangles:Vector.<Rectangle> = new Vector.<Rectangle>();

	public function new () {
		
		super ();
		
		
		
	}
	
	
}