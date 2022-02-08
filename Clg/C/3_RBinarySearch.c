#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int RBinarySearch (int a[], int key, int n, int first, int last) {
    int mid, i, j, temp;

    if (last < first) 
    return -1;

    for (i=0; i<=n-2; i++) {
        for (j=0; j<n-2-i; j++) {

            if (a[j+1] < a[j]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    mid = (first + last) / 2;

    if (key == a[mid]) 
    return -1;

    else if (key < a[mid]) 
    return RBinarySearch(a, key, n, first, mid-1);

    else 
    return RBinarySearch(a, key, n, a+1, last);
}


void main() {
    char ch;
    int a[100], n, i, key, first, last, res;
    clock_t st, et;

    printf("Enter the no. of Elements in array: \n");
    scanf("%d", &n);

    printf("The element of the array: \n");
    scanf("%d", &a[i]);

    for (i=0; i<n; i++) 
    printf("Enter the key element to search: \n");
    scanf("%d", &key);

    first = 0;
    last = n -1;
    
    st = clock();
    res = RBinarySearch(a, key, n, first, last);

    printf("The sored array is: ");
    scanf("%d", a[i]);
    et = clock();

    double time_taken = (((double) (et - st)) / CLOCKS_PER_SEC) * 1000;

    if (res == -1) {
        printf("The search element is not found \n");
        printf("The execution time taken is: %.0f milliseconds", time_taken);
    }

    else 
    printf("The search element founf at position : %d\n", res);
    printf("The execution time taken is = %.0f millisecods", time_taken);
}