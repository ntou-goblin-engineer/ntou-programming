#include <stdio.h>

int main()
{
    // [Basic] Encryption
    char c = getchar();
    while(c != '\n' && c != '\r'){
        if(c >= 'A' && c <= 'Z'){
            c = (c - 'A' + 2) % 26 + 'A';
        }else if(c >= 'a' && c <= 'z'){
            c = (c - 'a' + 2) % 26 + 'a';
        }else if(c >= '0' && c <= '9'){
            c = (c - '0' + 9) % 10 + '0';
        }
        printf("%c", c);
        c = getchar();
    }
    return 0;
}
