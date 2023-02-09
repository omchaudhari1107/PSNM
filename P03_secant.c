#include <stdio.h>
#include <math.h>
#define f(x) x *x *x - x - 1
#define esp 0.001
int main()
{
    float x1 = 1, x2 = 2, x3, fx1, fx2, fx3;
    printf("\nx1\t\tx2\t\tx3\t\tfx1\t\tfx2\t\tfx3");

    do
    {
        fx1 = f(x1);
        fx2 = f(x2);
        fx3 = f(x3);
        x3 = (x1 * fx2 - x2 * fx1) / (fx2 - fx1);
        printf("\n%f\t%f\t%f\t%f\t%f\t%f", x1, x2, x3, fx1, fx2, fx3);
        x1 = x2;
        x2 = x3;
    } while (fabs(fx3) > 0.01);
    printf("\napprox root is %f", x3);

    return 0;
}