#include <stdio.h>

int main()
{
    // [Basic] Declaring and Printing Variables
    int n;
    printf("What kind of conversion do you want? (1 = miles to km; 2 = km to miles) ");
    scanf("%d", &n);
    double x;
    switch(n){
        case 1:
            printf("How many miles: ");
            scanf("%lf", &x);
            printf("%lf miles are equal to %lf kilometers.", x, x * 1.609);
            break;
        case 2:
            printf("How many kilometers: ");
            scanf("%lf", &x);
            printf("%lf kilometers are equal to %lf miles.", x, x / 1.609);
            break;
    }
    return 0;
}
