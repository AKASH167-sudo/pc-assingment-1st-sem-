#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int minelement(int* arr, int size)
{
    int temp = arr[0];

    for(int i =0; i<size; i++)
    {
        if(arr[i] < temp)
        {
            temp = arr[i];
        }
    }

    return temp;
}


int maxelement(int* arr, int size)
{
    int temp = arr[0];

    for(int i =0; i<size; i++)
    {
        if(arr[i] > temp)
        {
            temp = arr[i];
        }
    }

    return temp;
}




int Mean(int* arr, int size)
{
    double counter = 0.000000;

    for( int i =0; i<size; i++)
    {
        counter += arr[i];
    }

    printf("Mean is : %lf\n", counter/size );
    return 1;
}

double variance(int *arr,int size)
{
    double mean=0;
    double meanofsquares=0;

    for(int i=0;i<size;i++)
    {
        mean = mean + arr[i];
        meanofsquares+=pow(arr[i],2);

    }

        mean=mean/size;
        meanofsquares=meanofsquares/size;

    return meanofsquares -pow(mean,2);
}

int sumofsquares(int *arr,int size)
{
    int sum=0;

    for(int i=0; i<size;i++)
    {
        sum+=pow(arr[i],2);
    }

    return sum;
}
 double harmonicmean(int *arr,int size)
 {
     double z=0;

     for(int i=0;i<size;i++)
     {
         z+=1.0/arr[i];//  1 is written as a float because division operator gives a float value when operate with an int
     }


     return size/z;
 }

int main(void)
{
    int N; //number of elements in the array
    printf("Number of elements for the array : ");
    scanf("%d", &N);
    int* arr = (int*)malloc(N * sizeof(int)); // mallocing

    //inputing elements in the array

    printf("enter the elements of the array: ");

    for(int i =0; i<N; i++)
    {

        scanf("%d", &arr[i]);
    }

    //minimum function call
    printf("minimum : %d\n", minelement(arr, N));

    //maximum function call
    printf("maximum : %d\n", maxelement(arr, N));


    //mean function call
    Mean(arr, N);

    // variance function call
    printf("the variance of the elements of the array is:%lf",variance(arr,N));

    // sum of squares call function

    sumofsquares(arr,N);

    printf("\nthe sum of squares of the elements of the array is:%d",sumofsquares(arr,N));

    // calling harmonic mean function

       harmonicmean(arr,N);

    printf("\nthe harmonic mean of the elements of the array is:%lf",harmonicmean(arr,N));

    return 0;
}
