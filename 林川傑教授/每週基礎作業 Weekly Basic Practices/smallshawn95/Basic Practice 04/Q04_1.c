#include <stdio.h>

int main()
{
    // Output numbers in a recurrence relation
    int t;
    printf("How many sets of test data: ");
    scanf("%d", &t);
    while(t--){
        printf("\n");
        int x1, y1, a, b, c, r, s, t, n;
        printf("x1 = ");
        scanf("%d", &x1);
        printf("y1 = ");
        scanf("%d", &y1);
        printf("a = ");
        scanf("%d", &a);
        printf("b = ");
        scanf("%d", &b);
        printf("c = ");
        scanf("%d", &c);
        printf("r = ");
        scanf("%d", &r);
        printf("s = ");
        scanf("%d", &s);
        printf("t = ");
        scanf("%d", &t);
        printf("n = ");
        scanf("%d", &n);
        int oldx, oldy;
        for(int i = 1; i <= n; i++){
            printf("n = %d, (x, y) = (%d, %d)\n", i, x1, y1);
            oldx = x1;
            oldy = y1;
            x1 = a * oldx + b * oldy + c;
            y1 = r * oldx + s * oldy + t;
        }
    }
    return 0;
}
