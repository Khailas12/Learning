// Using inline func

#include <iostream.h>
#include <conio.h>

const pi = 3.14149;

inline float circum (float x) {
    return (2 * pi * x);
}

inline float area (float x) {
    return (pi * x * x);
}

void main() {
    float r;
    clrscr();

    cout << "\nEnter the radius of the circle: ";
    cin >> r;

    cout << "\nCircumfrence: " << circum(r);
    cout << "\nArea";
    
}