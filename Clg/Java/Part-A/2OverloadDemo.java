class OverloadDemo {

    void area(int x, int y) {
        System.out.println("Area of triangle: " + 0.5 * x * y + "sq units");
    }

    void area(float x, float y) {
        System.out.println("Area of Reactangle: " + x * y + "sq units");
    }

    void area(double x) {
        double z = 3.14 * x * x;
        System.out.println("Area of the Circle: " + z + "sq units");
    }
}

class Overload {
    public static void main(String args[]) {
        OverloadDemo ob = new OverloadDemo();
        ob.area(5);
        ob.area(11f, 12f);
        ob.area(8, 6);
    }
}