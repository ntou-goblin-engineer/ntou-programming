#include <stdio.h>

int main()
{
    // [Advanced] Getting Digits in a Number in any Base
    int num, base;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    printf("Enter the base: ");
    scanf("%d", &base);
    int a[100001], x = 0;
    while(num > 0){
        a[x] = num % base;
        num /= base;
        x += 1;
    }
    printf("In base-%d system: ", base);
    for(int i = x - 1; i >= 0; i--){
        printf("%d", a[i]);
    }
    return 0;
}
