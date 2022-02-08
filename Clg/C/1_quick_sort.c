// Write a program to search on element in an array using method. Find the time required to search on element.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void linearSearch(int a[], int n, int key) {
    int i;

    for (i=0; i<n; i++) {
        if (key == a[i]) 
        return i;
    }
    return -1;
}

void main() {
    char ch;
    int a[100], n, key, i, res;

    clock_t st, et;
    printf("Enter the no. of elements in an array: \n");
    scanf("%d", &n);

    printf("Enter the element of array: \n");
    for (i=0; i<n; i++)
    scanf("%d", &a[i]);

    prinf("Enter the key element to search: \n");
    scanf("%d", &key);

    st = clock();
    res = linearSearch(a, n, key);
    et = clock();
    
    double time_taken = ((double) (et - st) / CLOCKS_PER_SEC ) * 1000;

    if (res == -1) {
        printf("The search elemetn is not found \n");
        printf("The execution time is = %. of MilliSeconds", time_taken);
        exit(0);
    }

    else
    printf("The search element is found at positon %d \n", res+1);
    prinf("The Execution time is=%. of MilliSeconds", time_taken);
}