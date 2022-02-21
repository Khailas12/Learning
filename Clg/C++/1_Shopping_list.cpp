// Program to prepare a shopping list using array of objects.

#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
#include <stdio.h>

const int size = 3;

class item {
    private:
    char name[45];
    float rate;
    int qty;
    float amount;

    public:
    void getdata() {
        cout << "\nEnter item name: ";
        cin >> name;
        cout << "\nEnter the quantity: ";
        cin >> qty;
        cout<< "\nEnter the rate: ";
        cin >> rate;
        cout << "_______________"<< endl;
    }

    void printdata() {
        cout << setw(7) << name;
        cout << setw(8) << qty;
        cout << setw(8) << rate;
        amount = rate * qty;
        cout << setw(8) << amount << endl;
    }
};

void main() {
    clrscr();
    item shop[size];
    for (int i=0; i<size; i++) 
        shop[i].getdata();
    cout << "\nDetails of shopping list \n\n";

    cout << "Name Qty Rate Amount" << endl;
    cout << "__________________________" << endl;

    for (i=0; i<size; i++)  
        shop[i].printdata();

    cout << "____________________" << endl;
    getch();
}