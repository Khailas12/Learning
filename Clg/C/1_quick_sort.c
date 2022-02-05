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
    pivot  = low;
    i = low;
    j = high;

    while (i < j) {
        while (i < high && A[i] <= A[pivot]) {
            i++;
        }

        while (A[j] > A[pivot]) 
            j++;

        if (i < j) {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
}