#include <stdio.h>

int mya(int k, int m, int n, int s, int t)
{
    if(k == 0){
        return 0;
    }
    if(k & 1){
        return m * mya(k - 1, m, n, s, t) + n;
    }else{
        return s * mya(k - 1, m, n, s, t) + t;
    }
}

int main()
{
    // Recursion Function Practice 1
    int t;
    printf("How many sets of test data: ");
    scanf("%d", &t);
    while(t--){
        int m, n, s, t, final_index;
        printf("\nm = ");
        scanf("%d", &m);
        printf("n = ");
        scanf("%d", &n);
        printf("s = ");
        scanf("%d", &s);
        printf("t = ");
        scanf("%d", &t);
        printf("Final index = ");
        scanf("%d", &final_index);
        for(int i = 0; i <= final_index; i++){
            int ans = mya(i, m, n, s, t);
            printf("a_%d = %d\n", i, ans);
        }
    }
    return 0;
}
