#include <stdio.h>

int is_prime(int x)
{
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    // Representation by Sum of Primes
    int t;
    printf("How many sets of test data: ");
    scanf("%d", &t);
    while(t--){
        int num;
        printf("\nInput a number (>= 6): ");
        scanf("%d", &num);
        for(int i = 2; i <= num; i++){
            if(is_prime(i)){
                for(int j = i; j <= num; j++){
                    if(is_prime(j)){
                        int k = num - i - j;
                        if(is_prime(k) && k >= j){
                            printf("%d = %d + %d + %d\n", num, i, j, k);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
