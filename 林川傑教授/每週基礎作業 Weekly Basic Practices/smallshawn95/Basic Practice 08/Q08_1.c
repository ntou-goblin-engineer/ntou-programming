#include <stdio.h>

void sort3(int *a, int *b, int *c)
{
    int t;
    if(*a > *b){
        t = *a;
        *a = *b;
        *b = t;
    }
    if(*a > *c){
        t = *a;
        *a = *c;
        *c = t;
    }
    if(*b > *c){
        t = *b;
        *b = *c;
        *c = t;
    }
}

int main()
{
    // Sorting Three Numbers
    int t;
    printf("How many sets of test data: ");
    scanf("%d", &t);
    int x, y, z;
    while(t--){
        printf("\nPlease input three numbers: ");
        scanf("%d%d%d", &x, &y, &z);
        sort3(&x, &y, &z);
        printf("Results after sorting: %d, %d, %d\n", x, y, z);
    }
    return 0;
}
