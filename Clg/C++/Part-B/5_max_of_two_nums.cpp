// prog to find the max of two numbers using friend func.

#include <iostream.h>
#include <conio.h>
#include <iomanip.h>


class max {
    private:
        int x;
        int y;
    
    public:
    void getdata() {
        cout << endl << "Enter a number: ";
        cin >> x;
        cout << endl << "Enter another num: ";
        cin >> y;
    }
    void showdata() {
        cout << endl << "x is : " << x;
        cout << endl << "Y is: " << y;
    }

    friend int large(max m);
}

int large (max m) {
    if (m.x > m.y) 
        return m.x;
    else   
        return m.y;
}

void main() {
    max m;
    int big;
    clrscr();

    m.getdata();
    m.showdata();

    cout << endl << "Largest is : " << large(m);
    getch();
}