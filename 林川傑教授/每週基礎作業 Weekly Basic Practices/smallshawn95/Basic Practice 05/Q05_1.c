#include <stdio.h>

int main()
{
    // Matrix Addition
    int t;
    printf("Both A and B are matrices with m x n elements.\n\n");
    printf("How many sets of test data: ");
    scanf("%d", &t);
    while(t--){
        int n, m, a[51][51], b[51][51];
        printf("\nInput values of m and n: ");
        scanf("%d %d", &m, &n);
        printf("Input numbers in matrix A: ");
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                scanf("%d", &a[i][j]);
            }
        }
        printf("Input numbers in matrix B: ");
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                scanf("%d", &b[i][j]);
            }
        }
        printf("Numbers in matrix C are:\n");
        printf("{");
        for(int i = 0; i < m; i++){
            printf("{");
            for(int j = 0; j < n; j++){
                printf("%d", a[i][j] + b[i][j]);
                if(j < n - 1){
                    printf(", ");
                }
            }
            if(i < m - 1){
                printf("}, \n");
            }else{
                printf("}");
            }
        }
        printf("}\n");
    }
    return 0;
}
