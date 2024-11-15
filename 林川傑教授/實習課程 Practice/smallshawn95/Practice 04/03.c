#include <stdio.h>

int main()
{
    // [Advanced] Leaving the Circle
    int n, k, num[10001] = {0};
    printf("n = ");
    scanf("%d", &n);
    printf("k = ");
    scanf("%d", &k);
    int count = 0;
    for(int i = 1; i <= n; i++){
        int j = 0;
        while(j < k){
            count += 1;
            if(num[count % n]){
                continue;
            }
            j += 1;
        }
        num[count % n] = i;
    }
    for(int i = 1; i < n; i++){
        printf("The leaving order of person#%d is %d\n", i, num[i]);
    }
    printf("The leaving order of person#%d is %d\n", n, num[0]);
    return 0;
}
