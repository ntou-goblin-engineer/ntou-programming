#include <stdio.h>

int main()
{
    // [Advanced] Printing a Calendar for a Month (Modified version of Programming Project 6.8)
    int day, start_weekday;
    printf("Enter the number of days in month: ");
    scanf("%d", &day);
    printf("Enter starting day of the week (0=Sunday, 1=Monday, ...) ");
    scanf("%d", &start_weekday);
    printf(" S  M  T  W  T  F  S\n");
    for(int i = 0; i < start_weekday; i++){
        printf("   ");
    }
    for(int i = 0; i < day; i++){
        printf("%2d ", i + 1);
        start_weekday += 1;
        if(start_weekday % 7 == 0){
            printf("\n");
        }
    }
    return 0;
}
