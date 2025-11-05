#include <stdio.h>

int main()
{
    float a, b, sumx = 0, sumy = 0, sumxy = 0, sumx2 = 0;
    float x[10], y[10];
    int i, n;

    printf("Number of pairs of data points n\n");
    scanf("%d", &n);

    printf("The data points x\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    printf("The data points y\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &y[i]);
    }
    for (i = 0; i < n; i++)
    {
        sumx = sumx + x[i];
        sumy = sumy + y[i];
        sumxy = sumxy + x[i] * y[i];
        sumx2 = sumx2 + x[i] * x[i];
    }

    a = (sumx2 * sumy - sumx * sumxy) / (n * sumx2 - sumx * sumx);
    b = (sumx * sumy - n * sumxy) / (sumx * sumx - n * sumx2);

    printf("a = %f  b = %f\n", a, b);
    printf("y = %.2f + %.2f x", a, b);
    return 0;
}
