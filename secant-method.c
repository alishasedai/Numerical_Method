#include <stdio.h>
#include <math.h>

#define f(x) (x * x * x - x - 2)        // function f(x) x^4 - 3x^2 + 2x - 5 = 0
#define e 0.00005                                    // tolerance

int main()
{
    float a, b, c;
    printf("Enter the value of a & b: ");
    scanf("%f %f", &a, &b);

    do
    {
        if (f(b) - f(a) != 0)
        {
            c = (a * f(b) - b * f(a)) / (f(b) - f(a));
            a = b;
            b = c;
        }
        else
        {
            printf("Root doesn't exist!");
            return 0;
        }
    } while (fabs(f(c)) > e);

    printf("\nRoot = %f, Func = %f", c, f(c));

    return 0;
}
