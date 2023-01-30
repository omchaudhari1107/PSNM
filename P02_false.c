#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) x*x*x-x-1
#define ESP 0.001
int main(){ int i = 0;
    float a, b, c, fa, fb, fc;
    printf("Enter the number of a: ");
    scanf("%f", &a);
    printf("Enter the number of b: ");
    scanf("%f", &b);
    printf("---------------------------------------------------------------------------------------------------------------\n");
    printf("i\t   a\t\t   b\t\t   c\t\t   f(a)\t\t   f(b)\t\t   f(c)\t\tUpdate\n");
    printf("---------------------------------------------------------------------------------------------------------------");
    do
    {
        fa = f(a);
        fb = f(b);
        c = (b*fa - a*fb)/(fa-fb);
        fc = f(c);
        i++;
           if (fc < 0)
        {
            printf("\n%d\t%f\t%f\t%f\t%f\t%f\t%f\tb=c", i, a, b, c, fa, fb, fc);
        }
        else if (fc > 0)
        {
            printf("\n%d\t%f\t%f\t%f\t%f\t%f\t%f\ta=c", i, a, b, c, fa, fb, fc);
        }
        else if (fc == 0)
        {
            printf("\n%d\t%f\t%f\t%f\t%f\t%f\t%f\tNAN", i, a, b, c, fa, fb, fc);
            break;
        }
        if (fc < 0)
        {
            a = c;
        }
        else if (fc > 0)
        {
            b = c;   
        }
        else if (fc == 0)
        {
            break;
        }
    } while (fabs(fc)>ESP);
    printf("\nApprox Root is: %f",c);
    return 0;
}
