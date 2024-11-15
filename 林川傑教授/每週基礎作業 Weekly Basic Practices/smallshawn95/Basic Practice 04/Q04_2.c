#include <stdio.h>

int main()
{
    // Bar chart of scores
    int student_num, score_interval, score_range[20] = {0};
    printf("Number of students: ");
    scanf("%d", &student_num);
    printf("Score interval: ");
    scanf("%d", &score_interval);
    for(int i = 0; i < student_num; i++){
        int student_score;
        printf("Student#%d's score: ", i + 1);
        scanf("%d", &student_score);
        score_range[student_score / score_interval] += 1;
    }
    printf("\nScoreRange People BarChart\n");
    int x = 0, lower = 0, upper = 0;
    while(upper <= 100){
        lower = x * score_interval;
        upper = (x + 1) * score_interval - 1;
        printf("%3d ~ %3d %5d   ", lower, upper, score_range[x]);
        for(int i = 0; i < score_range[x]; i++){
            printf("*");
        }
        x += 1;
        printf("\n");
    }
    return 0;
}
