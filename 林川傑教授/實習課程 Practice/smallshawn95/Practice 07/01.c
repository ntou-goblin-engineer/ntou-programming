#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_card(int id)
{
    char* suit_symbol[4] = {"♣", "♦", "♥", "♠"};
    char high_rank[4] = {'J', 'Q', 'K', 'A'};
    if(id % 13 <= 8){
        printf("%s%d", suit_symbol[id / 13], (id % 13) + 2);
    }else{
        printf("%s%c", suit_symbol[id / 13], high_rank[(id % 13) - 9]);
    }
}

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

int main()
{
    // [Basic] Dealing Poker Cards (撲克牌)
    srand(time(NULL));
    system("chcp 65001");
    int id = 0;
    while(1){
        printf("Input a card ID: ");
        scanf("%d", &id);
        if(id == -1){
            printf("\n");
            break;
        }
        print_card(id);
        printf("\n");
    }
    int card[52];
    shuffle(card, 52);
    for(int i = 0; i < 4; i++){
        printf("Player %d:", i + 1);
        for(int j = i * 13; j < (i + 1) * 13; j++){
            printf(" ");
            print_card(card[j]);
        }
        printf("\n");
    }
    return 0;
}
