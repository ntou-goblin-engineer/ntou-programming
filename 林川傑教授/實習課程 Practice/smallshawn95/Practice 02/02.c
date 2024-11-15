#include <stdio.h>

int main()
{
    // [Basic] 統一發票對獎系統 Uniform-Invoice Prize
    int prize_number, invoice_number;
    printf("First prize number: ");
    scanf("%d", &prize_number);
    printf("You invoice number: ");
    scanf("%d", &invoice_number);
    int x = 0;
    for(int i = 3; i <= 8; i++){
        int ten = 1;
        for(int j = 0; j < i; j++){
            ten *= 10;
        }
        if(prize_number % ten != invoice_number % ten){
            break;
        }else{
            x = i;
        }
    }
    switch(x){
        case 3:
            printf("Congratulations! You've won the sixth prize!\n");
            break;
        case 4:
            printf("Congratulations! You've won the fifth prize!\n");
            break;
        case 5:
            printf("Congratulations! You've won the fourth prize!\n");
            break;
        case 6:
            printf("Congratulations! You've won the third prize!\n");
            break;
        case 7:
            printf("Congratulations! You've won the second prize!\n");
            break;
        case 8:
            printf("Congratulations! You've won the first prize!\n");
            break;
        default:
            printf("Sorry. You did not win any prize.\n");
            break;
    }
    return 0;
}
