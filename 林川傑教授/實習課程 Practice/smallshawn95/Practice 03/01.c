#include <stdio.h>

int main()
{
    // [Basic] Áú«HÂI§L General Han Counting Soldiers
    int k = 0, num;
    while(++k){
        printf("Guess a number whose remainders are 2, 3, and 2 when divided by 3, 5, and 7, respectively: ");
        scanf("%d", &num);
        if(num % 3 == 2 && num % 5 == 3 && num % 7 == 2){
            printf("Correct!\n");
            break;
        }else{
            printf("Incorrect!\n");
        }
    }
    if(k == 1){
        printf("Wow! Correct in the first time! Good job!\n");
    }else if(k >= 2 && k < 6){
        printf("It took you %d times to answer correctly. You can do better.\n", k);
    }else{
        printf("It took you %d times to answer correctly. No one is better than you.\n", k);
    }
    return 0;
}
