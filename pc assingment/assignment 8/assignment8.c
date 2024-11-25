#include<stdio.h>
#include<math.h>

#define ERR_LIMIT 1.0e-15

float InitRoot001(float N)
{
    return N / 2;
}

float InitRoot002(float N)
{
    float E = 1;

    if (N < 1)
    {
        E /= 10;
        N *= 100;
    }

    else if (N > 100)
    {
        E *= 10;
        N /= 10;
    }

    return 5 * E;
}

float InitRoot003(float N)
{
    float E = 1, x = 0;

    if (N < 1)
    {
        E /= 10;
        N *= 100;
    }

    else if (N > 100)
    {
        E *= 10;
        N /= 100;
    }

    else if (N <= 10)x = 2;
    else if (N <= 20)x = 4;
    else if (N <= 30)x = 5;
    else if (N <= 40)x = 6;
    else if (N <= 50)x = 6.75;
    else if (N <= 60)x = 7.4;
    else if (N <= 70)x = 8.1;
    else if (N <= 80)x = 8.7;
    else if (N <= 90)x = 9.25;
    else x = 9.75;

    return x * E;
}

float InitRoot004(float N)
{
    float E = 1, x = 0;

    if (N < 1)
    {
        E /= 10;
        N *= 100;
    }

    else if (N > 100)
    {
        E *= 10;
        N /= 100;
    }

    x = N / 10 + 1.2;

    return x * E;
}

float InitRoot005(float N)
{
    if (fabs(N) < ERR_LIMIT)return 0;

    if (fabs(N - 1) < ERR_LIMIT)return 1;

    float x0 = InitRoot004(N), x1 = N / x0, t = 0;

    while (fabs(x0 - x1) >= ERR_LIMIT)
    {
        t = (x0 + x1) / 2;

        if (t * t < N)x0 = t;
        else x1 = t;
    }

    return (x0 + x1) / 2;
}

float HeronRoot(float N)
{
    if (fabs(N) < ERR_LIMIT)return 0;

    if (fabs(N - 1) < ERR_LIMIT)return 1;

    float x0 = InitRoot001(N), x1 = N / x0, t;

    while (fabs(x0 - x1) >= ERR_LIMIT)
    {
        t = (x0 + x1) / 2;

        if ((t * t) < N)x0 = t;
        else x1 = t;
    }

    return (x0 + x1) / 2;
}

float NewtonRaphsonRoot(float N)
{
    if (fabs(N) < ERR_LIMIT)return 0;

    if (fabs(N - 1) < ERR_LIMIT)return 1;

    double x = N / 2.0;

    while (fabs(x * x - N) >= ERR_LIMIT)
    {
        x = (x + N / x) / 2.0;
    }

    return x;
}

int main()
{
    float n;

    printf("Enter a Number: ");
    scanf("%f", &n);

    if (n < 0)
    {
        printf("Error: Negative input is not supported.\n");
        return -1;
    }

    printf("The root of %f with Algorithm 1 is: %f\n", n, InitRoot001(n));
    printf("The root of %f with Algorithm 2 is: %f\n", n, InitRoot002(n));
    printf("The root of %f with Algorithm 3 is: %f\n", n, InitRoot003(n));
    printf("The root of %f with Algorithm 4 is: %f\n", n, InitRoot004(n));
    printf("The root of %f with Algorithm 5 is: %f\n", n, InitRoot005(n));
    printf("The root of %f with HeronRoot is: %f\n", n, HeronRoot(n));
    printf("The root of %f with NewtonRaphsonRoot is: %f\n", n, NewtonRaphsonRoot(n));

    return 0;
}
