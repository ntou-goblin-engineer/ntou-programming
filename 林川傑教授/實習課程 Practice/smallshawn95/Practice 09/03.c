#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define width 10
#define height 5
char maze[2 * height + 1][2 * width + 1];
int offsetX[4] = {-2, 2, 0, 0};
int offsetY[4] = {0, 0, -2, 2};

void initMaze()
{
    for(int i = 0; i < 2 * height + 1; i++){
        for(int j = 0; j < 2 * width + 1; j++){
            maze[i][j] = '#';
        }
    }
    for(int i = 1; i < 2 * height + 1; i += 2){
        for(int j = 1; j < 2 * width + 1; j += 2){
            maze[i][j] = '?';
        }
    }
    maze[1][0] = ' ';
    maze[1][1] = ' ';
    maze[2 * height - 1][2 * width] = ' ';
}

void createMaze(int x, int y)
{
    while(1){
        int count = 0;
        int new_x, new_y;
        for(int i = 0; i < 4; i++){
            if(maze[x + offsetX[i]][y + offsetY[i]] == '?'){
                count++;
            }
        }
        if(count == 0){
            return;
        }
        int z = rand() % 4;
        new_x = x + offsetX[z];
        new_y = y + offsetY[z];
        if(maze[new_x][new_y] == '?'){
            maze[new_x][new_y] = ' ';
            maze[x + offsetX[z] / 2][y + offsetY[z] / 2] = ' ';
            createMaze(new_x, new_y);
        }
    }
}

void printMaze()
{
    for(int i = 0; i < 2 * height + 1; i++){
        for(int j = 0; j < 2 * width + 1; j++){
            printf("%c", maze[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    // [Advanced] Creating a Maze
    srand(time(NULL));
    initMaze();
    createMaze(1, 1);
    printMaze();
    return 0;
}
