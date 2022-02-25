// Program to illustrate multiplication of two matrices using binary opertator overloding.

#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
#include <stdlib.h>


class matrix {
    private:
        int mat[10][10];
        int rc;
    
    public:
    matrix() {};

    void size(int n) {
        rc = n;
    }
    
    matinput();
    matprint();
    matrix operator * (matrix);
};

void matrix :: matinput() {
    cout << "\nType " << rc * rc << " elements";

    for (int i=0; i<rc; i++)
        for (int j=0; j<rc; j++)    
            cin >> mat[i][j];
}

void matrix :: matprint() {
    for (int i=0; i<rc; i++) {
        for (int j=0; j<rc; j++)
        cout << mat[i][j] << setw(6);
        cout << "\n";
    }
}


matrix matrix :: operator * (matrix m) {
    matrix maxprod;
    maxprod.size(rc);

    for (int i=0; i<rc; i++)
        for (int j=0; j<rc; j++) {
            maxprod.mat[i][j] = 0;

            for (int k=0; k<rc; k++)
            maxprod.mat[i][j] = maxprod.mat[i][j] + maxprod.mat[k][j] * m.mat[j][k];
        }
        return maxprod;
}

void main() {
    clrscr();
    matrix A, B, C;
    int rc;

    cout << "\nType the Order of matrix: ";
    cin >> rc;

    A.size(rc);
    B.size(rc);
    C.size(rc);

    cout << "\nMatrix A: ";
    A.matinput();
    cout << "\nMatrix B: ";
    B.matinput();

    cout << "\nMatrix A: ";
    A.matprint();

    cout << "\nMatrix B: ";
    B.matprint();

    C = A * B;
    cout << "\nProuct of matrices: ";
    C.matprint();
    
    getch()
}