#include <stdio.h>

int main()
{
    // [Basic] Multi-Dimensional Arrays
    // score[year][class][seatNo][subject = {Chinese, English, Math}]
    int score[2][3][5][3] = {
        {
            {{98, 95, 92}, {89, 78, 82}, {88, 64, 64}, {61, 43, 44}, {48, 57, 58}},
            {{86, 78, 44}, {65, 65, 63}, {56, 67, 77}, {47, 78, 43}, {54, 56, 58}},
            {{46, 50, 76}, {65, 87, 66}, {64, 56, 66}, {92, 49, 86}, {45, 73, 83}}
        },
        {
            {{77, 52, 91}, {40, 45, 69}, {89, 70, 82}, {75, 94, 60}, {78, 86, 63}},
            {{85, 50, 91}, {92, 70, 82}, {72, 64, 93}, {86, 75, 52}, {43, 40, 83}},
            {{89, 92, 67}, {55, 61, 91}, {40, 54, 48}, {75, 79, 47}, {47, 44, 97}}
        }
    };
    char* subject[3] = {"國文", "英文", "數學"};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 3; k++){
                int sum = 0;
                for(int l = 0; l < 5; l++){
                    sum += score[j][k][l][i];
                }
                printf("%d年%d班學生%s成績總和為 %d\n", j + 1, k + 1, subject[i], sum);
            }
        }
    }
    return 0;
}
