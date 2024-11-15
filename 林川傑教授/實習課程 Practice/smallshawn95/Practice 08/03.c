#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int board[4][8] = {0};
int moving_x[4] = {-1, 1, 0, 0};
int moving_y[4] = {0, 0, -1, 1};

void game_init();
void print_board();
void shuffle(int[], int);
int eat_chess(int, int);

int main()
{
    // [Advanced] Set Up Chinese Dark Chess Basic Rules
    srand(time(NULL));
    system("chcp 65001 & cls");
    game_init();
    int x, y, z;
    int round = 1, color[2];
    do{
        print_board();
        switch(round & 1){
            case 1:
                printf("Now it's turn for Player 1.\n");
                break;
            case 0:
                printf("Now it's turn for Player 2.\n");
                break;
        }
        printf("Choose a cell (-1 for exit): ");
        scanf("%d%d", &x, &y);
        if(board[x][y] < 0){
            board[x][y] = -(board[x][y]);
            if(round == 1){
                if(board[x][y] <= 16){
                    color[0] = 1;
                    color[1] = 0;
                }else{
                    color[0] = 0;
                    color[1] = 1;
                }
            }
            round += 1;
        }else if(x >= 0 && y >= 0 && board[x][y] != 0){
            if(color[round & 1] == 0 && board[x][y] > 16){
                continue;
            }else if(color[round & 1] == 1 && board[x][y] <= 16){
                continue;
            }
            printf("Move to which direction (0, 1, 2, 3 for up, down, left, and right): ");
            scanf("%d", &z);
            int new_x = x + moving_x[z], new_y = y + moving_y[z];
            if(new_x < 0 || new_x >= 4 || new_y < 0 || new_y >= 8){
                continue;
            }
            if((eat_chess(board[x][y], board[new_x][new_y]) && board[new_x][new_y] > 0) || board[new_x][new_y] == 0){
                board[new_x][new_y] = board[x][y];
                board[x][y] = 0;
                round += 1;
            }
        }
        printf("\n");
    }while(x >= 0 && y >= 0);
    printf("\nThank you!! Bye~~");
    return 0;
}

void game_init()
{
    int chinese_chess_id[32], count = 0;
    shuffle(chinese_chess_id, 32);
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 8; j++){
            board[i][j] = -(chinese_chess_id[count++] + 1);
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
            }else if(board[i][j] < 0){
                printf("● ");
            }else{
                printf("%s", chinese_chess[board[i][j] - 1]);
            }
        }
        printf("|\n");
    }
    printf("   └──┴──┴──┴──┴──┴──┴──┴──┘\n\n");
}

int eat_chess(int one_chess_id, int two_chess_id)
{
    if((one_chess_id <= 16 && two_chess_id <= 16) || (one_chess_id < 16 && two_chess_id < 16)){
        return 0;
    }
    if(one_chess_id > 16){
        one_chess_id -= 16;
    }
    if(two_chess_id > 16){
        two_chess_id -= 16;
    }
    int one_chess_rank = one_chess_id / 2;
    int two_chess_rank = two_chess_id / 2;
    if(one_chess_rank <= 2){
        one_chess_rank = 2;
    }
    if(one_chess_rank == 2 && two_chess_rank == 8){
        return 1;
    }else if(one_chess_rank == 8 && two_chess_rank == 2){
        return 0;
    }else if(one_chess_rank >= two_chess_rank){
        return 1;
    }
    return 0;
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
