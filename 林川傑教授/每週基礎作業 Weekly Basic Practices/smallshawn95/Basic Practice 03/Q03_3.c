#include <stdio.h>

int main()
{
    // Basic Practice of Arrays
    int n = 0, num[101];
    while(n <= 0){
        printf("How many numbers: ");
        scanf("%d", &n);
    }
    printf("Please input numbers: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    int x = 0;
    while(x >= 0){
        printf("\nWhich index do you want to see (-1 to exit): ");
        scanf("%d", &x);
        if(x == -1){
            printf("Over!\n");
        }else{
            printf("a[%d] is %d\n", x, num[x]);
        }
    }
    return 0;
}
