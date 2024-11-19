#include<stdio.h>

int f(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]); //  print each index of the array
    }

    return 0;
}

int main(void)
{
    int N;
    printf("enter the number of single digits:\n");
    scanf("%d",&N);

    int arr[N]; // storing all those single digits in an array

    printf("enter the digits:\n");

    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }

    f(arr,N);

    return 0;

}
