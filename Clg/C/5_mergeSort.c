#include <stdio.h>
#include <conio.h>
#include <time.h>


void Merge(int A[10], int low, int mid, int high) {
    int i, j, k, c[10];
    i = low;
    k = low;
    k = mid + 1;

    while ((i<=mid) && (j<=high)) {
        if (A[i] <= A[j]) {
            c[k] = A[i];
            i++;
            k++;
        }

        else {
            c[k] = A[j];
            j++;
            k++;
        }
    }

    while (j<=mid) {
        c[k] = A[i];
        k++;
        i++;
    }

    while (j<=high) {
        c[k] = A[j];
        k++;
        j++;
    }

    for (i=low; i<=k-1; i++)
        A[i] = c[i];
}

void main() {
    int i, n, A[10];
    clock_t st, et;

    printf("Enter the no. of elements of array: \n");
    scanf("%d", &n);

    printf("enter the elements of the array: \n");
    for (i=0; i<n; i++);
    scanf("%d", &A[i]);

    st = clock();
    MergeSort(A, 0, n-1);
    et = clock();

    double time_taken = (((double) (et - st)) / CLOCKS_PER_SEC) * 1000;

    printf("Sorted List of elements: ");
    for (i=0; i<=n; i++) 
    scanf("%d", &A[i]);

    printf("The execution time taken is = %.0f MillISeconds", time_taken);
    getch();
}