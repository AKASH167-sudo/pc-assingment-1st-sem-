#include<stdio.h>
#include<math.h>

#define ERROR_BOUND 1.0e-15 // defining error bound

long long factorial(int n) //function to calculate factorial used int the expansion of e^x
{
    if(n==0)
    {
        return 1;
    }

    else
    {

    long long prod=1;

    for(int i=1;i<=n;i++)
    {
        prod*=i;
    }

    return prod;
    }
}

double expo(double x)
{
    double sum=1;
    double temp=1;
    int i=1;

    while(temp>ERROR_BOUND) // temp must always be greater than error bound in each iteration for the loop to run
    {
        temp =pow(x,i)/factorial(i);
        sum+=temp;
        i++;
    }

    return sum;
}

int main(void)
{
    double x;

    printf("enter the value of x:");
    scanf("%lf",&x);

    // calling expo to print e^x
    printf("the value of e^%lf is :%.16f",x,expo(x));

    return 0;

}

