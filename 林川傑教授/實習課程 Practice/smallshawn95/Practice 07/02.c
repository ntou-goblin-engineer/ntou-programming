#include <stdio.h>
#include <stdlib.h>

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

void suit_counting(int card[], int suit[])
{
    for(int i = 0; i < 5; i++){
        suit[card[i] / 13] += 1;
    }
}

void rank_counting(int card[], int rank[])
{
    for(int i = 0; i < 5; i++){
        rank[(card[i] % 13) + 1] += 1;
    }
}

int main()
{
    // [Basic] Counting Cards in the Same Suits or Ranks (同花色或同點數的張數)
    system("chcp 65001");
    printf("Input cards: ");
    int card[5];
    for(int i = 0; i < 5; i++){
        scanf("%d", &card[i]);
    }
    for(int i = 0; i < 5; i++){
        print_card(card[i]);
        printf(" ");
        if(i == 4){
            printf("have\n");
        }
    }
    char* suit_symbol[4] = {"♣", "♦", "♥", "♠"};
    char high_rank[4] = {'J', 'Q', 'K', 'A'};
    int suit_count[4] = {0}, rank_count[14] = {0};
    suit_counting(card, suit_count);
    rank_counting(card, rank_count);
    for(int i = 0; i < 4; i++){
        printf("%s(%d) ", suit_symbol[i], suit_count[i]);
    }
    printf("\n");
    for(int i = 1; i <= 13; i++){
        if(i < 10){
            printf("%d(%d) ", i + 1, rank_count[i]);
        }else{
            printf("%c(%d) ", high_rank[i - 10], rank_count[i]);
        }
    }
    return 0;
}
