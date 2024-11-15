#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int gcd(int a, int b)
{
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    // Using Sine Function
    int n;
    printf("n = ");
    scanf("%d", &n);
    for(int i = 0; i <= n * 2; i++){
        double x = (double)i / n * PI;
        if(i % n == 0){
            printf("x = %d PI, sin(x) = %lf, cos(x) = %lf\n", i / n, sin(x), cos(x));
        }else{
            int k = gcd(i, n);
            printf("x = %d/%d PI, sin(x) = %lf, cos(x) = %lf\n", i / k, n / k, sin(x), cos(x));
        }
    }
    return 0;
}
