#include <stdio.h>
#include <math.h>
#define f(x, y) (x+y) // ya neri chai questions rakhney

int main()
{
    int i, n;
    float x0, y0, x1, y1, xn, h, k1, k2,k3,k4, k;

    printf("Enter the initial value of x0 and y0 :\n");
    scanf("%f %f", &x0, &y0);

    printf("Enter the value of xn\n");
    scanf("%f", &xn);

    printf("Enter the value of n\n");
    scanf("%d", &n);

    h = (xn - x0) / n;

    printf("Step size h = %f\n", h);

    for (i = 0; i < n; i++)
    {
        k1 = h * f(x0, y0);
        k2 = h * f(x0 + h / 2, y0 + k1 / 2);
        k3 = h * f(x0 + h / 2, y0 + k2 / 2);
        k4 = h * f(x0 + h, y0 + k3);

        y1 = y0 + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        x1 = x0 + h;

        x0 = x1;
        y0 = y1;
        printf("x1 = %f\t y1 = %f\n", x1, y1);
    }
    return 0;
}