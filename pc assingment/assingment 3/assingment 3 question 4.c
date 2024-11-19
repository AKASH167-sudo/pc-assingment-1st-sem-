#include<stdio.h>

int f(int m) // function to check if M is a factorial number or not
{
    int prod=1;
    int i=1;

  while ( i<=m)
  {
      prod*=i;

      if(m==prod) // checking if M is equal to the multiple of 1x2x3...
      {
          printf("yes %d is a factorial number",m);
          break;
      }

      i++;
  }

  if(m!=prod) // printf for when  M is not a factorial number
    printf("no %d is not a factorial number",m);

    return 0;
}

int main()
{
    int M;

    printf("enter the value of M :");
    scanf("%d",&M);

   // calling f to find if M is a factorial or not
    f(M);

    return 0;
}
