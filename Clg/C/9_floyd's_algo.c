// Impelement all pairs shortest path problem using floyd's algo

#include <stdio.h>

int c[5][5], i, j, k, n;

void floyd() {
    for (k=1; k<=n; k++)
        for (i=1; i<=n; i++)    
            for (j=1; j<=n; j++)    
                if ((c[i][k] + c[k][j]) < c[i][j])  
                    c[i][j] = c[i][k] + c[k][j];
}

void main() {
    printf("Enter the no. of vertices: ");
    scanf("%d", &n);

    printf("\nEnter the adjacency matrix: ");
    for (i=1; i<=n; i++)
        {
            scanf("%d", &c[i][j]);
            if (c[i][j] == 0)
                c[i][j] = 999;
        }
    
    foyd();

    for (i=1; i<=n; i++)
        c[i][i] = 0;

    printf("\nThe all pair shortest path: \n");
    for (i=0; i<=n; i++) {
        for (j=0; j<=n; j++)
            printf("%6d", c[i][j]);
        printf("\n");
    }
    getch();
}