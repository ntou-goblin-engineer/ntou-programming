#include <stdio.h>

int main()
{
    // Reverse a number
    int n;
    printf("How many sets of test data: ");
    scanf("%d", &n);
    while(n--){
        int x;
        printf("\nInput a number: ");
        scanf("%d", &x);
        printf("Reverse: ");
        while(x > 0){
            printf("%d", x % 10);
            x /= 10;
        }
        printf("\n");
    }
    return 0;
}
