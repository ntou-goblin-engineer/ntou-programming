#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int board[4][8] = {0};

void game_init();
void print_board();
void shuffle(int a[], int n);

int main()
{
    // [Basic] Print the Chess Board
    srand(time(NULL));
    system("chcp 65001 & cls");
    game_init();
    print_board();
    return 0;
}

void game_init()
{
    int chinese_chess_id[32], count = 0;
    shuffle(chinese_chess_id, 32);
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 8; j++){
            board[i][j] = chinese_chess_id[count++] + 1;
        }
    }
}

void print_board()
{
    char* chinese_chess[32] = {
        "卒", "卒", "卒", "卒", "卒", "包", "包", "馬",
        "馬", "車", "車", "象", "象", "士", "士", "將",
        "兵", "兵", "兵", "兵", "兵", "炮", "炮", "傌",
        "傌", "俥", "俥", "相", "相", "仕", "仕", "帥"
    };
    printf("x\\y 0  1  2  3  4  5  6  7\n");
    for(int i = 0; i < 4; i++){
        if(i == 0){
            printf("   ┌──┬──┬──┬──┬──┬──┬──┬──┐\n");
        }else{
            printf("   ├──┼──┼──┼──┼──┼──┼──┼──┤\n");
        }
        printf(" %d ", i);
        for(int j = 0; j < 8; j++){
            printf("|");
            if(board[i][j] == 0){
                printf("  ");
            }else{
                printf("%s", chinese_chess[board[i][j] - 1]);
            }
        }
        printf("|\n");
    }
    printf("   └──┴──┴──┴──┴──┴──┴──┴──┘\n");
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
