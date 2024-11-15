#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int a[], int n)
{
    for(int i = 0; i < n; i++){
        a[i] = i;
    }
    for(int i = 0; i < n; i++){
        int x = rand() % n;
        int t = a[i];
        a[i] = a[x];
        a[x] = t;
    }
}

int check_prize(int first[], int ticket[], int special)
{
    int x = 0, y = 0;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(first[i] == ticket[j]){
                x += 1;
            }
            if(special == ticket[j]){
                y = 1;
            }
        }
    }
    if(x == 6){
        return 8;
    }else if(x == 5 && y == 1){
        return 7;
    }else if(x == 5){
        return 6;
    }else if(x == 4 && y == 1){
        return 5;
    }else if(x == 4){
        return 4;
    }else if(x == 3 && y == 1){
        return 3;
    }else if(x == 2 && y == 1){
        return 2;
    }else if(x == 3){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    // [Advanced] Lottery Prize
    srand(time(NULL));
    char *prize_name[9] = {"", "General", "Seventh", "Sixth", "Fifth", "Fourth", "Third", "Second", "First"};
    int prize[9] = {0, 400, 400, 1000, 1286, 9781, 32705, 1569878, 19100192};
    int first[6], ticket[6], special, i;
    printf("Input the first-prize numbers: ");
    for(int i = 0; i < 6; i++){
        scanf("%d", &first[i]);
    }
    printf("Input the special number: ");
    scanf("%d", &special);
    printf("Input the numbers on the lottery ticket: ");
    for(int i = 0; i < 6; i++){
        scanf("%d", &ticket[i]);
    }
    int price_code = check_prize(first, ticket, special);
    if(price_code > 0){
        printf("You have won the %s Prize which is NT$%d!!\n", prize_name[price_code], prize[price_code]);
    }else{
        printf("You did not win any prize.\n");
    }
    printf("\n[Random similation for 5 times]\n");
    for(int i = 0; i < 5; i++){
        int num[49];
        printf("\nThe first-prize numbers are");
        shuffle(num, 49);
        for(int i = 0; i < 6; i++){
            first[i] = num[i] + 1;
            printf(" %d", first[i]);
        }
        special = num[6] + 1;
        printf("\nThe special number is %d", special);
        printf("\nYour ticket numbers are");
        shuffle(num, 49);
        for(int i = 0; i < 6; i++){
            ticket[i] = num[i] + 1;
            printf(" %d", ticket[i]);
        }
        price_code = check_prize(first, ticket, special);
        if(price_code > 0){
            printf("\nYou have won the %s Prize which is NT$%d!!\n", prize_name[price_code], prize[price_code]);
        }else{
            printf("\nYou did not win any prize.\n");
        }
    }
    return 0;
}
