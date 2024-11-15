#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // [Basic] Random Number and Array
    srand(time(NULL));
    int times[10] = {0};
    for(int i = 0; i < 6000; i++){
        int a = rand() % 6 + 1;
        int b = rand() % 6 + 1;
        times[a + b - 2] += 1;
    }
    for(int i = 0; i < 10; i++){
        printf("%d occurs %d times\n", i + 2, times[i]);
    }
    return 0;
}
