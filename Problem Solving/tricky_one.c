#include<stdio.h>
int main()

{
    int i=0;
    printf("%d %d %d", i, i++, ++i);
    // difference in these increment's positions would make a diffrece in the output
    printf("%d %d %d", i, ++i, i++);

    return 0;
}