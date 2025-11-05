#include <stdio.h>
#include <math.h>
// #define f(x)

float f(float x)
{
    return 1 / (1 + x * x); // yo chai qn ho esma chai change garnu parxa
}
int main()
{
    float a, b, h, I, sum1 = 0, sum2 = 0, sum3=0;
    int n, i;
    printf("Enter the value of a \n");
    scanf("%f", &a);

    printf("Enter the value of b \n");
    scanf("%f", &b);

    printf("Enter the value of n \n");
    scanf("%d", &n); // n is any positive integer

    h = (b - a) / n;
    sum1 = sum1 + f(a) + f(b);

    for (i = 1; i < n; i++)
    {
        if(i%2 ==0 ){
            sum2 = sum2 + 2 * f(a + (i * h));
        }
        else{
            sum3 = sum3 + 4 * f(a + (i * h));
        }
    }
    I = (h / 3) * (sum1 + sum2 + sum3);
    printf("I = %f", I);
    return 0;
}
