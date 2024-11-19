#include<stdio.h>
#include<math.h>

#define ERROR_BOUND 1.0e-15

double arctanhx(double x)
{
    double sum=0;
    double term=x;
    int i=0;

    while(fabs(term)>ERROR_BOUND)
    {
        sum+=term/(2*i+1);
        term*=(x*x);
        i++;

    }

    return sum;
}

int main()
{
    double n;

    printf("enter a number: ");
    scanf("%lf",&n);

    printf("the value of arctanh(%.16f)is %.16f : ",n,arctanhx(n));

    return 0;
}
