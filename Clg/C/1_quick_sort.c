// Write a program to sort an elements in an array using Quick Sort. Find time required to sort the elements.

#include <stdio.h>
#include <conio.h>
#include <time.h>


void quicksort(int A[10], int low, int high) {
    int j;
    if (low < high) {
        j = partition(A, low, high);
        quicksort(A, low, j - 1);
        quicksort(A, j+1, high);
    }
}

int partition(int A[10], int low, int high) {
    int pivot, j, temp, i;
    pivot = low;
    i = low;
    j = high;

    while (i < j) {
        while (i < high && A[i] <= A[pivot]) {
            i++;
        }

        while (A[j] <= A[pivot])
            j++;

        if (i < j) {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    temp = A[pivot];
    A[pivot] = A[j];
    A[j] = temp;
    return j;
}


void main() {
    int i, n, A[10];
    clock_t st, et;

    printf("Enter the number of elements in array: \n");
    scanf("%d", &n);

    printf("Enter the elements of array: \n");
    scanf("%d", &A[i]);

    st= clock();
    quicksort(A, 0, n-1);
    et = clock();

    double time_taken = (((double) (et - st)) / CLOCKS_PER_SEC) * 1000;

    printf("Sorted list of elements: ");
    for (i=0; i<n; i++) 
        printf("%d", A[i]);
    
    printf("The execution time is: %.Of milli seconds", time_taken);
    getch();
}