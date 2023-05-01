// Implement Simpson's 1/3rd Method
#include <stdio.h>
#include <math.h>
#define f(x) 1 / (1 + x * x)
int main()
{
    double a = 0, b = 1, h = 0.2, fx[100], sum_eventerms = 0, sum_oddterms = 0, arr[100], x, Area = 0, num, n;
    int temp;
    n = (b - a) / h;
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
        if (i % 2 == 0)
        {
            sum_eventerms = sum_eventerms + fx[i];
        }
        else
        {
            sum_oddterms = sum_oddterms + fx[i];
        }
    }
    temp = n;
    Area = (h / 3) * ((fx[0] + fx[temp - 1]) + (2 * sum_eventerms) + (4 * sum_oddterms));
    printf("Area of given function is %f", Area);
    return 0;
}