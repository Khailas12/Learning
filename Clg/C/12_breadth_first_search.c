// Print all the nodes reachable from a given starting node in a given diagraph using breadth first search

#include <stdio.h>
#include <conio.h>


int q[10], f=-1, r=-1;

void qins(int x) {
    if (f==-1 && r==-1) {
        f++;
        q[++r] = x;
    }
    else 
        q[++r] = x;
}

int qdel() {
    int x = q[f];

    if (f==r) {
        f=r-1;
    }
    else 
        f++;
    return x;
}

void main() {
    int u, s[10]={0}, src, n, a[10][10], i, j;

    printf("Enter the no. of vertices: \n");
    scanf("%d", &n);

    printf("\nEnter the Adjacency matrix: ");
    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
            scanf("%d", &a[i][j]);

    printf("\nEnter the source vertex: ");
    scanf("%d", &src);

    s[src] = 1;
    qins(src);

    while (f!=-1 && r!=-1) {
        u = qdel();
        printf(" %d", u);

        for (i=1; i<=n; i++) 
            for (j=1; j<=n; j++)   
                if (a[i][u] == 1 && s[i] == 0) {
                    s[i] = 1;
                    qins(i);
                }
    }

    printf("\nThe nodes that are reachable from %d are: \n", src);
    for (i=1; i<=n; i++) 
        if(s[i]) {
            printf(" %d", i);
        }

    getch();
}