// Print all the nodes reachable from a given starting node in a given diagraph using depth first search method.

#include <stdio.h>
#include <conio.h>

int s[10]={0};

void dfs(int n, int a[10][10], int u) {
    int v;
    s[u] = 1;
    printf("%d", u);

    for (v=1; v<=n; v++) 
        if (a[u][v]==1 && s[v]==0) {
            dfs(n, a, v);
        }
}


void main() {
    int a[10][10], n, src, i, j;
    printf("\nEnter the no. of vertices: ");
    scanf("%d", &n);

    printf("\nEnter the Adjacency of matrix: ");
    for (i=0; i<=n; i++)
        for (j=0; j<=n; j++)
            scanf("%d", &a[i][j]);
        
    printf("\nEnter the source vertex: ");
    scanf("%d", &src);

    if (src <=n ) {
        dfs(n, a, src);
        printf("\nThe nodes which are reachable from %d ara: ", src);

        if (s[i])
            printf(" %d", i);
    }
}