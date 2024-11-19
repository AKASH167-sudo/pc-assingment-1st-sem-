#include<stdio.h>

int recursive_f(int a) // function made using recursion to calculate N!
{
    if(a==1||a==0)
    {
        return 1;
    }

    else
    {
        return a*recursive_f(a-1); // f(n) calls f(n-1) and f(n-1) calls f(n-2) and so on till f(1) is not reached
    }
}

int iterative_f(int b) // function made using iteration to calculate  N!
{   int prod=1;

    for(int i=1;i<=b;i++)
    {
        prod*=i;
    }

    return prod;

}

int main()
{
    int N;

    printf("enter the value of N:");
    scanf("%d",&N);

    printf("the value of %d! due to recursive function is : %d \n the value of   %d! due to iterative function is %d",N,recursive_f(N),N,iterative_f(N));


    return 0;
}



