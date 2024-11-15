#include <stdio.h>

int main()
{
    // [Basic] 猜公因數遊戲 Guessing Common Factors
    int num;
    printf("Enter a common factor of 36 and 45: ");
    scanf("%d", &num);
    if(num == 0){
        printf("Please do not guess 0!!!!!\n");
    }else if(!(36 % num) && !(45 % num)){
        printf("Correct! What a math genius!!\n");
    }else{
        printf("Incorrect! Have you ever learned math before?\n");
    }
    printf("Game over.");
    return 0;
}
