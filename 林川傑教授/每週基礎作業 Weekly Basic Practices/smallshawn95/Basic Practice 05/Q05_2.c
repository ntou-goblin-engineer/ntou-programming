#include <stdio.h>

int main()
{
    // Matrix Multiplication
    int t;
    printf("A is a matrix with m x n elements and B is a matrix with n x p elements.\n\n");
    printf("How many sets of test data: ");
    scanf("%d", &t);
    while(t--){
        int m, n, p, a[51][51], b[51][51];
        printf("\nInput values of m, n, p: ");
        scanf("%d %d %d", &m, &n, &p);
        printf("Input numbers in matrix A: ");
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                scanf("%d", &a[i][j]);
            }
        }
        printf("Input numbers in matrix B: ");
        for(int i = 0; i < n; i++){
            for(int j = 0; j < p; j++){
                scanf("%d", &b[i][j]);
            }
        }
        printf("Numbers in matrix C are:\n");
        printf("{");
        for(int i = 0; i < m; i++){
            printf("{");
            for(int j = 0; j < p; j++){
                int sum = 0;
                for(int k = 0; k < n; k++){
                    sum += a[i][k] * b[k][j];
                }
                printf("%d", sum);
                if(j < p - 1){
                    printf(", ");
                }
            }
            if(i < m - 1){
                printf("},\n");
            }else{
                printf("}");
            }
        }
        printf("}\n");
    }
    return 0;
}
