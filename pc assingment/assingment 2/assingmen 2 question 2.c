#include<stdio.h>
#include<math.h>
int s1(int n)
{
    return (n*(n+1))/2; // sum of first n natural numbers is (n*(n+1))/2
      // it wont return a decimal value because if n is odd then n+1 will be even
}

int s2(int n)
{
    return pow(n,2); // sum of first n odd numbers is n^2
}

int s3(int n)
{
    return n*(n+1);// sum of first n even numbers is calculated by taking 2 common from
}                  // all the terms and using formula for sum of first n natural numbers

double s4(int n)
{
    double sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=1.0/i; // 1 is written as 1.0 because division operator gives float value when operated with a int and a float
    }

    return sum;
}


int main(void)
{
    int N;
    printf("enter the value of N:");
    scanf("%d",&N);

    // calling function s1 to find sum of first N natural numbers

    printf("the sum of first %d natural numbers is %d",N,s1(N));

    // calling function s2 to find sum of first N odd natural numbers

    printf("the sum of first %d odd natural numbers is %d",N,s2(N));

    // calling function s3 to find sum of first N natural numbers

    printf("the sum of first %d even natural numbers is %d",N,s3(N));

    // calling function s4 to find sum of first N natural numbers

    printf("the sum of reciprocal of first %d numbers is %lf",N,s4(N));

    return 0;
}
