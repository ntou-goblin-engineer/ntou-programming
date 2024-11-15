#include <stdio.h>

int main()
{
    // [Basic] Finding Amicable Pairs
    int sum[10005] = {0};
    for(int i = 1; i <= 10000; i++){
        for(int j = 1; j < i; j++){
            if(i % j == 0){
                sum[i] += j;
            }
        }
    }
    int x = 0;
    for(int i = 1; i <= 10000; i++){
        for(int j = i; j <= 10000; j++){
            if(i != j && i == sum[j] && j == sum[i]){
                printf("%d: (%d, %d)\n", ++x, i, j);
            }
        }
    }
    return 0;
}
