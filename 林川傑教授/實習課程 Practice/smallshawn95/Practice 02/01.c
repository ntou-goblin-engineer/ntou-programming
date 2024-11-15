#include <stdio.h>

int main()
{
    // [Basic] 便利商店特價組合 Promotion in a Convenient Store
    int a, b, price;
    printf("Please input the number of Product A: ");
    scanf("%d", &a);
    printf("Please input the number of Product B: ");
    scanf("%d", &b);
    if(a <= b){
        price = a * 39 + (b - a) / 2 * 32 + (b - a) % 2 * 20;
    }else{
        price = b * 39 + (a - b) / 2 * 40 + (a - b) % 2 * 25;
    }
    printf("Total price: $%d\n", price);
    return 0;
}
