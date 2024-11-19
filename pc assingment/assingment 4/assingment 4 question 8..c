#include<stdio.h>

long long factorial(int n) // function which calculates factorial of a number
{   if(n==0)
     {
         return 1;
     }

    long long prod=1;

    for(int i=1;i<=n;i++)
    {
        prod*=i;
    }

    return prod;
}

long long f(int n) // recursive function which returns the sum of all factorial till n
{
    if (n==0)
    {
        return factorial(n);
    }

    else
    {
        return factorial(n) + f(n-1); // this returns n! +(n-1)! ... till 0!
    }
}

int main(void)
{
    int N;

    printf("enter the value of N:");
    scanf("%d",&N);

    // calling f(N)
    printf("the value of f(%d) is %lld:",N,f(N));

    return 0;
}
