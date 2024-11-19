#include<stdio.h>

double f(int n)
{
    double z=1; // z is taken as a double because factorial can grow very large and cause overflow
    for(int  i=1;i<=n;i++)
    {
        z*=i;
    }

    return 1/z; // function to return the reciprocal of z
}

int main()
{
    int N;

    printf("enter the value of N:");
    scanf("%d",&N);

 // calling f to print 1/z!

    printf("the value of 1/%d! is %.15f",N,f(N)); //

    return 0;
}
