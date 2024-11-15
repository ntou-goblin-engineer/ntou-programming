#include <stdio.h>
#include <math.h>

int main()
{
    // [Basic] Estimating the Value of Sine Function, sin(x)
    double x, tolerance;
    printf("Please input the value of x: ");
    scanf("%lf", &x);
    printf("Please input the value of tolerance: ");
    scanf("%lf", &tolerance);
    int i = 1, k = 1;
    double sum = x, num = x, sin_x = sin(x);
    while(sin_x - sum > tolerance || sum - sin_x > tolerance){
        num = num * (x * x) / ((k + 1) * (k + 2));
        if(i % 2 == 1){
            sum -= num;
        }else{
            sum += num;
        }
        i += 1;
        k += 2;
    }
    printf("sin(%lf) ~= %.20f\n", x, sum);
    printf("sin(%lf) == %.20f\n", x, sin_x);
    return 0;
}
