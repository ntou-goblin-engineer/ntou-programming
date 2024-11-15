#include <stdio.h>

int main()
{
    // Looping Large Numbers
    int t;
    printf("How many sets of test data: ");
    scanf("%d", &t);
    while(t--){
        unsigned int num;
        printf("\nPlease input a large integer: ");
        scanf("%u", &num);
        int x;
        printf("Please input an interval: ");
        scanf("%d", &x);
        printf("Your input is [%u]\n", num);
        printf("Its next 10 numbers by adding %d are:\n", x);
        for(int i = 0; i < 10; i++){
            num += x;
            printf("%u\n", num);
        }
        printf("Over!!\n");
    }
    return 0;
}
