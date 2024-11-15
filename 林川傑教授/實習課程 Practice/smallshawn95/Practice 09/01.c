#include <stdio.h>

int A(int m, int n)
{
    if(m == 0){
        return n + 1;
    }else{
        if(n == 0){
            return A(m - 1, 1);
        }else{
            return A(m - 1, A(m, n - 1));
        }
    }
}

int main()
{
    // [Basic] Ackermann Function
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 10; j++){
            printf("A(%d, %d) = %d\n", i, j, A(i, j));
        }
    }
    return 0;
}
