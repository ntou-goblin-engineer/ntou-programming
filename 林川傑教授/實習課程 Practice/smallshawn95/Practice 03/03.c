#include <stdio.h>

int main()
{
    // [Advanced] Prime Factorization
    int num, first = 0;
    printf("Please input a positive number: ");
    scanf("%d", &num);
    printf("%d", num);
    for(int i = 2; i <= num; i++){
        int count = 0;
        while(num % i == 0){
            num /= i;
            count += 1;
        }
        if(count > 0){
            if(!first){
                printf(" = ");
                first = 1;
            }else{
                printf(" * ");
            }
            printf("%d^%d", i, count);
        }
    }
    return 0;
}
