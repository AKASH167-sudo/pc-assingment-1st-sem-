#include<stdio.h>
#include<math.h>

int f(int n)
{
   for(double i=0;i<n;i++) // pow function takes both arguments as double so i is taken as double
       {
           printf("%lf\n",pow(2,i));
       }

}
int main()
{
    int N;

    printf("enter the value of N:");
    scanf("%d",&N);
 // calling f to print values 
    f(N);

    return 0;
}
