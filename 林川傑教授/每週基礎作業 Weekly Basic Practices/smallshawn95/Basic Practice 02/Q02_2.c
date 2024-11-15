#include <stdio.h>

int main()
{
    int n;
    printf("How many sets of test data: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int price, age, gender;
        printf("\nOriginal Price: ");
        scanf("%d", &price);
        printf("Age: ");
        scanf("%d", &age);
        printf("Gender (0=female, 1=male): ");
        scanf("%d", &gender);
        if(gender == 0){
            price = price * 9 / 10;
        }
        if(age >= 65){
            price = price * 8 / 10;
        }else if(age < 12){
            price = price * 7 / 10;
        }
        printf("Real price is %d.\n", price);
    }
    return 0;
}
