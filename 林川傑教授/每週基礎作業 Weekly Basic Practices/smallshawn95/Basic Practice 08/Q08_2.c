#include <stdio.h>

int main()
{
    // Print Characters and Codes
    char c = getchar();
    while(c != '\r' && c != '\n'){
        char ch = c + 1;
        printf("[%c] %d ==> [%c] %d\n", c, c, ch, ch);
        c = getchar();
    }
    return 0;
}
