#include<stdio.h>

double f(double m,int n) // function to take values of  x and N
{
    double z=pow(m,n); // for calculating x^N

    double p=1;

    for(int i=1;i<=n;i++) // used for calculating N!
    {
        p*=i;
    }

    return z/p;
}

int main(void)
{
    double x;
    int N;

    printf("enter the value of x and N:");
    scanf("%lf%d",&x,&N);

    // calling function f to print the final value
    printf("the value of %lf^%d/%d! is:%.10f",x,N,N,f(x,N));


    return 0;
}
