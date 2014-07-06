package utils;

class IntegerRectangle {

    public var x:Int;
    public var y:Int;
    public var width:Int;
    public var height:Int;
    public var right:Int;
    public var bottom:Int;
    public var id:Int;

    public function new(x:Int = 0, y:Int = 0, width:Int = 0, height:Int = 0) {
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
        this.right = x + width;
        this.bottom = y + height;
    }
}
