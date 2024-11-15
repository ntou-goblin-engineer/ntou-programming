#include <stdio.h>

int main()
{
    int n;
    printf("Please input a positive number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("%d / %d = %lf\n", i, i + 1, (double)i / (i + 1));
    }
    return 0;
}
