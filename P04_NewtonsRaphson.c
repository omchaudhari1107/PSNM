
#include <stdio.h>
#include <math.h>
#define f(x) x *x *x - x - 1
#define g(x) 3 * x *x - 1
#define esp 0.001
int main()
{
    float x1 = 1, x2, fx1, fx2, gx1;
    printf("x1\t\tx2\t\tfx1");
    do
    {
        fx1 = f(x1);
        gx1 = g(x1);
        x2 = x1 - (fx1 / gx1);
        fx2 = f(x2);
        printf("\n%f\t%f\t%f", x1, x2, fx1);
        x1 = x2;
    } while (fabs(fx2) > 0.00001);
    printf("\napprox root is %f", x2);
    return 0;
}