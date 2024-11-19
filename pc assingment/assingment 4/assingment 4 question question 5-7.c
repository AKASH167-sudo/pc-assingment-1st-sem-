#include<stdio.h>
#include<math.h>

#define ERROR_BOUND 1.0e-15
#define PI 3.141592653589793

double expo(double x) // function to calculate exponential function
{
    double sum=1;
    double temp=1;
    int i=1;

    while(fabs(temp)>ERROR_BOUND) // fabs is used because temp will be negative in cases where x is negativw
    {
       temp *=x/i; // calculates x^n/n! in each iteration
       sum+=temp; // adds x^n/n! in each iteration to the sum
       i++;
    }

    return sum;
}

double sinh(double radian)
{
    return (expo(radian)-expo(-radian))/2; // calculates sinhx
}

double cosh(double radian) // calculates  coshx
{
    return (expo(radian)+expo(-radian))/2;
}

double tanh(double radian) // calculates tanhx
{
    return sinh(radian)/cosh(radian);
}

double coth( double radian) // calculates cothx
{
    return 1/tanh(radian);
}

double cosech(double radian)// calculates cosechx
{
    return 1/sinh(radian);
}

double sech( double radian)// calculates sechx
{
    return 1/cosh(radian);
}

int main(void)
{
    double radian;

    printf("enter the angle in radians:\n");
    scanf("%lf",&radian);

    // printing the value of sinh
    printf("the value of sinh(%lf) is %.16f\n",radian,sinh(radian));

    // printing the value of cosh
    printf("the value of cosh(%lf) is %.16f\n",radian,cosh(radian));

    // printing the value of tanh
    printf("the value of tanh(%lf) is %.16f\n",radian,tanh(radian));

    // printing the value of coth
    printf("the value of coth(%lf) is %.16f\n",radian,coth(radian));

    // printing the value of cosech
    printf("the value of cosech(%lf) is %.16f\n",radian,cosech(radian));

    // printing the value of sech
    printf("the value of sech(%lf) is %.16f\n",radian,sech(radian));


    return 0;
}
