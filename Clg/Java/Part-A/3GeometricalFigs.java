// Prog to calculate the areas of different geomentrical shape using abstract class

import java.lang.Math;

// abstract class -> to provide a common definition of a base class that multiple derived classes can share
abstract class Shape {
    abstract void area();
    double area;
}

class Triangle extends Shape {
    double b=50, h=15;
    void area() {
        area = (b * h) / 2;
        System.out.println("Area of triangle: " + area);
    }
}

class Reactangle extends Shape {
    double w=70, h=20;
    void area() {
        area = w * h;
        System.out.println("Area of Reactangle: " + area);
    }
}

class Circle extends Shape {
    double r=5;
    void area() {
        area = Math.PI * r * r;
        System.out.println("Area of Circle: " + area);
    }
}

class Area {
    public static void main(String[] args) {
        Triangle t = new Triangle();
        Reactangle r = new Reactangle();
        Circle c = new Circle();

        t.area();
        r.area();
        c.area();
    }
}