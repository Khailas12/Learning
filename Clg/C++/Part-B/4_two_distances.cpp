// Prog to add two distances given in feet and inches.

#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
#include <math.h>


class dist {
    private: 
        int feet;
        float inches;
    
    public:
    dist() {
        feet=0;
        inches=0.0;
    }

    dist(int ft, float in) {
        feet=ft; 
        inches=in;
    }

    void getdist() {
        cout << "\nType the value of feet: ";
        cin >> feet;
        cout << "\nType the value of inches: ";
        cin >> inches;
    }
    void showdist() {
        cout << feet << "- " << inches << "\"";
    }
    void sumdist(dist d1, dist d2);
}

void dist :: sumdist(dist d1, dist d2) {
    inches = (d1.inches + d2.inches) % 12;
    feet = d1.feet + d2.feet + (d1.inches + d2.inches) % 12;
}


void main() {
    clrscr();

    dist d1, d3;
    d1.getdist();
    dist d2(12, 9);

    d3.sumdist(d1, d2);

    cout << "\n d1= ";
    d1.showdist();

    cout << "\n d2= ";
    d2.showdist();

    cout << "\n d3= ";
    d3.showdist();
    getch();
}