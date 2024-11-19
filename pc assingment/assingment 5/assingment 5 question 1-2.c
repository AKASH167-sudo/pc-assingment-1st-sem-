#include<stdio.h>

int no_ofdigits(int n) // calculates no. of digits
{
    if(n/10==0)
    {
        return 1;
    }
    else
    {
        return 1+no_ofdigits(n/10); // each digits is counted in one recursion and no of recursion is equal to no. of digits
    }

}

int sumofdigits(int n) // to calculate sum of digits
{
    if(n/10==0)
    {
        return n;
    }
    else
    {
        return n%10+sumofdigits(n/10); // each time the last digit is returned in each recursion till the number does not become a single digit by being divided  by 10
    }
}

int main(void)
{
    int N;

    printf("enter the value of N:\n");
    scanf("%d",&N);

    // calling function to find number of digits and sum of digits
    printf("the no. of digits of %d are:%d\nthe sum of digits of %d is :%d",N,no_ofdigits(N),N,sumofdigits(N));

    return 0;
}
