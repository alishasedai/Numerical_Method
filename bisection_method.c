#include <stdio.h>
#include <math.h>

#define f(x) (x * x * x - x - 2)                     // function f(x) x^4 - 3x^2 + 2x - 5 = 0
#define e 0.00005                                    // tolerance

int main()
{
    float a, b, c;
    printf("Enter the value of a & b: ");
    scanf("%f %f", &a, &b);

    if (f(a) * f(b) > 0)
    {
        printf("Root does not exists");
        return 0;
    }

    do
    {
        c = (a + b) / 2;
        if (f(a) * f(c) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    } while (fabs(f(c)) > e);

    printf("\nRoot = %f, Functional Value(Func) = %f", c, f(c));

    return 0;
}