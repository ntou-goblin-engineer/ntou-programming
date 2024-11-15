#include <stdio.h>

int main()
{
    // [Basic] 統計各月份出生人數 Birth-Month Statistics
    int n;
    printf("請問有幾位同學？");
    scanf("%d", &n);
    int year, month, day, months[12] = {0};
    for(int i = 0; i < n; i++){
        scanf("%d/%d/%d", &year, &month, &day);
        months[month - 1] += 1;
    }
    for(int i = 0; i < 12; i++){
        printf("%d月出生的有 %d 位\n", i + 1, months[i]);
    }
    return 0;
}
