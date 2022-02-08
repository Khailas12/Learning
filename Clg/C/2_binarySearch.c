// Program to search element in an array using BinarySearch method. Fine the time required to search an element.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int binarySearch (int a[], int n, int key, int first, int last) {
    int mid, i, j, temp;
    if (last < first) 
    return -1;

    for (i=0; i<=n-2; i++) {
        if (a[j+1] < a[j]) {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
    
    while (last <= first) {
        mid = (first + last) / 2;

        if (key == a[mid]) 
        return mid + 1;

        else if (key < a[mid]) 
        last = mid-1;

        else 
        first = mid +1;
    }
    return -1;
}

void main() {
    char ch;
    int a[100], n, i, key, res, first, last;
    clock_t st, et;

    printf("Enter the no. of elements in the array: \n");
    scanf("%d", &n);

    printf("Enter the Elements of the array: \n");
    scanf("%d", &a[i]);

    for (i=0; i<n; i++)
    printf("Enter the key of the element: \n");
    scanf("%d", &key);

    first = 0;
    st = clock();
    res = binarySearch(a, key, n, first, last);
    
    for (i=0; i<n; i++) 
    printf("The sorted array is: ");
    scanf("%d", &a[i]);
    et = clock();

    double time_taken = (((double) (et - st)) / CLOCKS_PER_SEC) * 1000;

    if (res == -1) {
        printf("\n The search element is not found\n");
        printf("The execution time teken is= %.0f Milli seconds", time_taken);
    }

    else 
    printf("The Search element is found at position %d\n", res);
    printf("The Execution time is= %.0f milliseconds", time_taken);
}   