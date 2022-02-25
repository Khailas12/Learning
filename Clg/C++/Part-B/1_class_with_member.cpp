// Prog to illustrate class with member func defined outside the class.

#include <iostream.h>
#include <conio.h>


class employee {
    private:
        char name[23];
        int basic;

    public:
    void getdata();
    void showData();
};


void employee :: getdata() {
    cout << "Enter the name of employee: ";
    cin.getline(name, 23);

    cout << "Basic pay: ";
    cin >> basic;
}

void employee :: showData() {
    cout << "\nName of employee: " << name;
    cout << "\nBasic Pay: " << basic;
}


void main() {
    employee emp;
    clrscr();
    
    emp.getdata();
    emp.showData();
    
}