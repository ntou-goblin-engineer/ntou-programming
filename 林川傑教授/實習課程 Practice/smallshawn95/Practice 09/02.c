#include <stdio.h>

int C(int n, int k)
{
    if(k == 0 || k == n){
        return 1;
    }
    return C(n - 1, k - 1) + C(n - 1, k);
}

int main()
{
    // [Basic] Combination as a Recursion Function
    for(int i = 1; i < 7; i++){
        for(int j = 0; j < i + 1; j++){
            printf("C(%d, %d) = %d\n", i, j, C(i, j));
        }
    }
    return 0;
}
