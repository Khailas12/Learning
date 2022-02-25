// Write a program to swap two nums using friends function.

#include <iostream.h>
#include <conio.h>
#include <iomanip.h>


class sample {
    private:
        int x;
        int y;

    public: 
    void setdata(int a, int b) {
        a = x;
        b = y;
    }

    void showdata() {
        cout << "x = " << x << " y = " << y;
    }
    friend void swap(sample&);
};

void swap(sample& s) {
    int temp;
    temp = s.x;
    s.x = s.y;
    s.y = temp;
}

void main () {
    sample s;
    int x1, x2;
    clrscr();

    cout << "\nEnter 2 numbers: ";
    cin >> x1 >> x2;
    s.setdata(x1, x2);

    cout << "\nBefore Swapping: ";
    s.showdata();
    
    swap(s);
    cout << "\nAfter Swapping: ";
    s.showdata();
}