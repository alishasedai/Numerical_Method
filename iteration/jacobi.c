
#include <stdio.h>
#include <math.h>

#define f1(x,y,z) (17 -y + 2 * z)/20;
#define f2(x, y, z) (-18 -3 * x +z)/20
#define f3(x, y, z) (25-2*x + 3*y)/20
#define e 0.0000001
int main(){

    float x0, y0, z0, x1, y1,z1,e1,e2,e3;
    printf("Enter the initial guesses:");
    scanf("%f %f %f", &x0, &y0, &z0);
    do{
        x1 = f1(x0, y0, z0);
        y1 = f2(x0, y0, z0);
        z1 = f3(x0, y0, z0);

        e1 = fabs(x1-x0);
        e2 = fabs(y1 -y0);
        e3 = fabs(z1 - z0);
        x0 = x1;
        y0 = y1;
        z0 = z1;
        printf("\n x = %f\t y = %f\t z = %f\n",x1,y1,z1);
    }
    while (e1 > e && e2>e && e3 >e);
    
return 0;
}