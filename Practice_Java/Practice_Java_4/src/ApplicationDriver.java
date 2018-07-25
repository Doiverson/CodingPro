
class ApplicationDriver {

    enum ShapeType{
        Rectangle,
        Triangle,
        Circle,
        Square,
        Custom
    }

    public static void main(String arg[]){
        int[] s1Sides = {10,20};
        Shape s1 = new Shape() {
            @Override
            public float perimeter() {
                return 0;
            }

            @Override
            public float area() {
                return 0;
            }
        };

        System.out.println("S1's perimeter is: " + (s1.perimeter()));
        System.out.println("S1's area is: " + (s1.area()));

        int[] s2Sides = {10};
        Shape s2 = new Shape(ShapeType.Square, s2Sides){

        };

        System.out.println("S2's perimeter is: " + (s2.perimeter()));
        System.out.println("S2's area is:"+(s2.area()));
    }


}
