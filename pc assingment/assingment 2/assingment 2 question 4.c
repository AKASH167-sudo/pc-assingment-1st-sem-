#include<stdio.h>

int f(int a)
{
    int count =1;
    int sum=0;
    int sign=1;

    for (int i=0;i<a;i++)
    {
        sum+=sign*count;

        count+=2; // so that value of count increases by 2 in every iteration

        sign*=-1; // so that we can multiply it by count to get a value with different sign after every iteration
    }

    return sum;
}

int main(void)
{
    int N;

    printf("enter the value of N:");

    scanf("%d",&N); // inputting an integer

    // printing the sum by calling f(N)

    printf("the sum s is equal to %d",f(N));

    return 0;
}
