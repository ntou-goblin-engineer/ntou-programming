#include <stdio.h>

int main()
{
    int t;
    printf("How many sets of test data: ");
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int x;
        printf("\nInput a number: ");
        scanf("%d", &x);
        if(x % 5 == 0){
            printf("%d is a multiple of 5.\n", x);
        }
        if(x % 7 == 0){
            printf("%d is a multiple of 7.\n", x);
        }
    }
    printf("\nOver!\n");
    return 0;
}
