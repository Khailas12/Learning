// Minimum cost spanning tree using Kruskal's Algo
#include <stdio.h>

int parent[10], min, no_of_edges=1, mincost=0, cost[10][10];
int a, b, i, j, v, u, n;


main() {
    printf("\nEnter the No. of Vertices: ");
    scanf("%d", &n);

    printf("\nEnter the Adjacent matrix: ");
    for (i=0; i<=n; i++) 
        for (j=0; j<=n; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j]== 0)
                cost[i][j] = 999;
        }

    while (no_of_edges < n) {
        for (i=1; i<=n; i++) 
            for (j=1; j<=n; j++)
                if (cost[i][j] < min) {
                    min = cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            
        while (parent[u])
            u = parent[u];
        while (parent[v])  
            v = parent[v];

        if (u!=v) {
            printf("\n%d\tEdge \t(%d, %d) = %d", no_of_edges, a, b, min);
            mincost += min;
            parent[v] = u;
            no_of_edges++;
        }
        cost[a][b] = cost[b][a] = 999;
    }
    printf("\n\tMinimum Cost = %d", mincost);
}