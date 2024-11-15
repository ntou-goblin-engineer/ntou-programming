#include <stdio.h>

int main()
{
    // Sum of aaa
    int t;
    printf("How many sets of test data: ");
    scanf("%d", &t);
    while(t--){
        printf("\n");
        int value = 0, digit = 0;
        while(value <= 0 || value >= 10){
            printf("Input the value of a (1 ~ 9): ");
            scanf("%d", &value);
        }
        while(digit <= 0 || digit >= 10){
            printf("Input the number of digits (1 ~ 9): ");
            scanf("%d", &digit);
        }
        long long sum = 0, num = value;
        printf("s = ");
        for(int i = 0; i < digit; i++){
            if(i == digit - 1){
                printf("%d = ", num);
            }else{
                printf("%d + ", num);
            }
            sum += num;
            num = num * 10 + value;
        }
        printf("%d\n", sum);
    }
    return 0;
}
