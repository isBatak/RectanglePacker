package utils;

/**
* Class used for sorting the inserted rectangles based on the dimensions
*/
class SortableSize {

    public var width:Int;
    public var height:Int;
    public var id:Int;

    public function new(width:Int, height:Int, id:Int) {
        this.width = width;
        this.height = height;
        this.id = id;
    }
}
