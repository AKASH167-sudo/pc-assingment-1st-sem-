#include<stdio.h>

int f(int n,int r)
{
    int prod=1;

    for (int i=n;i>n-r;i--) // loop should run n-r-1 times
    {
        prod*=i;   // this calculates P(n,r) , because for example P(5,2) means 5*(5-1)
    }

    int prod_r=1;

    for(int i=1;i<=r;i++)
    {
        prod_r*=i; // this calculates r!
    }

    return prod/prod_r; // returns P(n,r)/r! which is same as C(n,r)
}

int main(void)
{
    int N,R;

    printf("enter the values of N and R:");
    scanf("%d%d",&N,&R);

   // printing value of C(N,R)
    printf("the value of C(%d,%d) is:%d",N,R,f(N,R));

    return 0;
}
