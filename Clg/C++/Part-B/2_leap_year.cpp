// using inline func.

#include <iostream.h>
#include <conio.h>


class leap {
    private:
        int year;

    public:
        void checkyear();
        void getdata();
        void showData();
};

void leap :: checkyear() {
    int r4 = year % 4;
    int r100 = year % 100;
    int r400 = year % 400;

    if ((r4==0 && r100 != 0) || (r400 == 0)) {
        return 1;
    }
    else {
        return 0;
    }
}

void leap :: getdata() {
    cout << "\nEnter a 4 digit year: ";
    cin >> year;
}

void leap :: showData() {
    if (checkyear()) {
        cout << "\n" << year << "is a leapyear";
    }
    else {
        cout << "\n" << year << "is not a leapyear";
    }
}

void main() {
    leap yr;
    clrscr();
    
    yr.getdata();
    yr.showData();
}