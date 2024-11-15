#include <stdio.h>

int main()
{
    // Sum of reciprocal numbers
    int n;
    printf("How many sets of test data: ");
    scanf("%d", &n);
    while(n--){
        printf("\n");
        int x = 0;
        while(x <= 0){
            printf("Input n (> 0): ");
            scanf("%d", &x);
        }
        int start = 1;
        if(x % 2 == 0){
            start = 2;
        }
        double total = 0;
        for(int i = start; i <= x; i += 2){
            total += 1.0 / i;
            if(i == x){
                printf("1/%d = ", i);
            }else{
                printf("1/%d + ", i);
            }
        }
        printf("%lf\n", total);
    }
    return 0;
}
