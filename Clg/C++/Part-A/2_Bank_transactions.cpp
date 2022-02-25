// Prog to perform bank transactions
#include <iostream.h>
#include <stdio.h>
#include <iomanip.h>


class current;

class saving {
    private:
        char name[32];
        int accno;
        float balance;
    
    public:
    void getdata() {
        cout << "\nSavings Account: ";
        cout << "\nName : ";
        cin >> name;

        cout << "\nAccount Balance  : ";
        cin >> accno;

        cout << "\nBalance  : ";
        cin >> balance;
    }
    friend float totbalance(saving.current);
};

class current {
    private:
        char name[32];
        int accno;
        float balance;
    
    public:
    void getdata() {
        cout << "\nCurrent Account:";
        cout << "\nName : ";
        cin >> name;

        cout << "\nAccount Name     : ";
        cin >> accno;

        cout << "\nBalance  : ";
        cin >> balance;
    }
    friend float totbalance(saving.current);
}

float totbalance(saving sav, current cur) {
    cout << endl << "**********************" << endl;
    cout << "\nSaving's Account Details : Rs." << setw(6) << sav.balance << endl;
    cout << "\nCurrent Account Details  : Rs." << setw(6) << cur.balance << endl;
    return (cur.balance + sav.balance);
}

void main() {
    saving s;
    current c;

    s.getdata();
    c.getdata();

    cout << "\nTotal Balance        : " << setw(6) << totbalance(s, c) << endl;
    cout << endl << "***********************" << endl;
    getch();
}