#include <iostream.h>
#include <conio.h>
#include <iomanip.h>


class clock {
    private:
        int hr;
        int min;

    public:
    void gettime(int hh, int mm) {
        hr = hh;
        min = mm;
    }

    void showtime() {
        cout << hr << " hours and " << min << " minutes";
    }
    clock operator + (clock);
};

clock clock :: operator + (clock t) {
    clock temp;

    temp.min = min + t.min;
    temp.hr = hr + t.hr;

    if (temp.min >= 60) {
        temp.min = temp.min - 60;
        temp.hr++;
    }
    return temp;
}

void main() {
    clrscr();

    clock t1, t2, t3;
    t1.gettime(1, 25);
    t2.gettime(3, 50);

    t3 = t1 + t2;

    cout << endl << "\nTime 1= "; t1.showtime();
    cout << endl << "\nTime 2= "; t2.showtime();
    cout << endl << "\nTotal Duration: "; t3.showtime();
}