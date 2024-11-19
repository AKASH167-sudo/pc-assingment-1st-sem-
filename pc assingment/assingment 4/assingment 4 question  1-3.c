#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846


long long factorial(int n)
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

double sine(double x)
{
    double s=0;
    int sign=1;

    for(int i=1;i<=10;i++)
    {
        s+=sign*pow(x,2*i-1)/factorial(2*i-1);
        sign*=-1;
    }

    return s;
}

double cosine(double x)
{
    double s=0;
    int sign=1;

    for(int i=0;i<=10;i++)
    {
        s+=sign*pow(x,2*i)/factorial(2*i);
        sign*=-1;
    }

    return s;
}

int main(void)
{
    double angle;

    printf("enter the angle in degrees:");
    scanf("%lf",&angle);

    double toRadian=angle*(PI/180);

    // printing the value of sine(angle)
    printf("the value of sine(%lf) is %.16f\n",angle,sine(toRadian));

    // printing the value of cosine(angle)
    printf("the value of cosine(%lf) is %.16f\n",angle,cosine(toRadian));

    // printing the value of tan, cost, cosec, sec
    printf("the value of tangent(%lf) is: %.16f\ncotangent(%lf) is:%.16f\ncosecant(%lf) is:%.16f\nsecant(%lf) is %.16f",angle,sine(toRadian)/cosine(toRadian),angle,cosine(toRadian)/sine(toRadian),angle,1/sine(toRadian),angle,1/cosine(toRadian) );

    return 0;
}

