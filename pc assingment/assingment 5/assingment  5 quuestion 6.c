#include<stdio.h>
void f(int n, int b)
{
    if(n==0)
    {
        return ;
    }

    else
    {
        f(n/b,b);
        printf("%d",n%b);
    }

}
int main()
{
    int N;
    int B;
    printf("enter a decimal number and the base B:");
    scanf("%d%d",&N,&B);


    if (N==0)
    {
        printf("0");
    }

    else
    {
       f(N,B);
    }




    return 0;
}

