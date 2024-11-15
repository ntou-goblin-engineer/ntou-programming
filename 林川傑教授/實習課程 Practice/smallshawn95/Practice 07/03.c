#include <stdio.h>
#include <stdlib.h>

void init(int suit[], int rank[])
{
    for(int i = 0; i < 4; i++){
        suit[i] = 0;
    }
    for(int i = 0; i < 14; i++){
        rank[i] = 0;
    }
}

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

int hand_ranking(int hand[], int suit[], int rank[])
{
    suit_counting(hand, suit);
    rank_counting(hand, rank);
    rank[0] = rank[13];
    int two = 0, three = 0, straight = 0;
    for(int i = 0; i < 13; i++){
        if(rank[i] == 1 && i < 10){
            straight = 1;
            for(int j = 1; j <= 4; j++){
                if(rank[i + j] != 1){
                    straight = 0;
                    break;
                }
            }
            if(straight){
                break;
            }
        }else if(rank[i] == 2){
            two += 1;
        }else if(rank[i] == 3){
            three += 1;
        }else if(rank[i] == 4){
            return 7;
        }
    }
    for(int i = 0; i < 4; i++){
        if(suit[i] == 5){
            if(straight){
                return 8;
            }else{
                return 5;
            }
        }
    }
    if(straight){
        return 4;
    }else if(three == 1 && two == 1){
        return 6;
    }else if(three == 1){
        return 3;
    }else if(two == 2){
        return 2;
    }else if(two == 1){
        return 1;
    }
    return 0;
}

int main()
{
    // [Advanced] Poker Hand Ranking (撲克牌型)
    system("chcp 65001");
    int ans, hand[5], card[52], suit_count[4], rank_count[14];
    char* poker_ranking[9] = {
        "High Card", "One Pair", "Two Pairs",
        "Three of a Kind", "Straight", "Flush",
        "Full House", "Four of a Kind", "Straight Flush"
    };
    for(int i = 0; i < 10; i++){
        init(suit_count, rank_count);
        shuffle(card, 52);
        for(int j = 0; j < 5; j++){
            hand[j] = card[j];
            print_card(hand[j]);
            printf(" ");
        }
        ans = hand_ranking(hand, suit_count, rank_count);
        printf("[%s]\n", poker_ranking[ans]);

    }
    printf("\nPlease input 5 cards: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &hand[i]);
    }
    for(int i = 0; i < 5; i++){
        print_card(hand[i]);
        printf(" ");
    }

    init(suit_count, rank_count);
    ans = hand_ranking(hand, suit_count, rank_count);
    printf("[%s]\n", poker_ranking[ans]);
    return 0;
}
