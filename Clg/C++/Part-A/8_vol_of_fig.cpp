// Prog to find the area and volume of a respective fig using func overloading.

#include <iostream.h>
#include <conio.h>


const double pi = 3.14146;

class shape {
    private:
    void measure(double r) {
        cout << "Area of a circle: " << pi * r * r;
        cout << "Area of a sphere: " << (4.0/3) * pi * r * r * r << endl;
    }

    void measure(long l, int b, int h) {
        cout << "Area of a Rectangle: " << l * b;
        cout << "Area of a rectangular box: " << l * b * h << endl;
    }

    void measure(float f) {
        cout << "Area of a Square: " << f * f;
        cout << "Area of a Cube: " << f * f * f;
    }
}


void main() {
    int b, h;
    long l;
    double r;
    float f;

    shape obj;
    clrscr();

    cout << "\n\tCALCULATION OF AREA AND VOLUME\n";
    cout << "\nEnter the radius of the circle: ";
    cin >> r;   
    obj.measure(r);

    cout << "\nEnter the length, breadth and height of a Rectangle: ";
    cin >> l >> b >> h;
    obj.measure(l, b, h);

    cout << "\nEnter the Side of a square: ";
    cin >> f;
    obj.measure(f);

    getch();
}