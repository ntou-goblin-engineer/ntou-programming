#include <stdio.h>

int main()
{
    // [Basic] �έp�U����X�ͤH�� Birth-Month Statistics
    int n;
    printf("�аݦ��X��P�ǡH");
    scanf("%d", &n);
    int year, month, day, months[12] = {0};
    for(int i = 0; i < n; i++){
        scanf("%d/%d/%d", &year, &month, &day);
        months[month - 1] += 1;
    }
    for(int i = 0; i < 12; i++){
        printf("%d��X�ͪ��� %d ��\n", i + 1, months[i]);
    }
    return 0;
}
