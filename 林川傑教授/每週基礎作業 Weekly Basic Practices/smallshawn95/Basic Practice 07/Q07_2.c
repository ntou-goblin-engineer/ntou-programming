#include <stdio.h>

int main()
{
    // Print Numbers in Different Bases
    int t;
    printf("How many sets of test data: ");
    scanf("%d", &t);
    while(t--){
        int x;
        printf("\nInput base: (1) decimal (2) octal (3) hexadecimal: ");
        scanf("%d", &x);
        int num;
        printf("Input a number: ");
        switch(x){
            case 1:
                scanf("%d", &num);
                break;
            case 2:
                scanf("%o", &num);
                break;
            case 3:
                scanf("%x", &num);
                break;
        }
        printf("This number is\n");
        printf("%d in decimal\n", num);
        printf("%o in octal, and\n", num);
        printf("%x in hexadecimal.\n", num);
    }
    return 0;
}
