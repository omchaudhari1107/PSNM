// Implement Trapezoidal Method
// h,x->f(x)=y
#include <stdio.h>
#include <math.h>
#define f(x) 1 / (1 + x * x)
int main()
{
    double a = 0, b = 1, h = 0.2, sum = 0, x, Area = 0, num, n;
    int temp;
    n = (b - a) / h;
    temp = n;
    double fx[temp], arr[temp];
    x = a;
    for (int i = 0; i < n; i++)
    {
        x = x + h;
        arr[i] = x;
    }
    for (int i = 0; i < n; i++)
    {
        num = arr[i];
        fx[i] = f(num);
    }
    for (int i = 1; i < n - 1; i++)
    {
        sum = sum + fx[i];
    }
    Area = (h / 2) * ((fx[0] + fx[temp - 1]) + (2 * sum));

    printf("Area of given function is %f", Area);
    return 0;
}