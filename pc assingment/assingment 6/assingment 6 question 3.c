#include<stdio.h>
#include<stdbool.h>


float f(char *a)
{
    float sum =0;
    int i=0;
    int j=0;
    float count=0;
    int counter =1;
    bool isnegative=false;

    if(a[i]=='-')
    {
        isnegative=true;
        i++;
    }

    while(a[i]!='.')
    {
        sum = sum*10+(a[i]-'0');
        i++;
    }

    while(a[i+1]!='\n')
    {
        count=count*10+(a[i+1]-'0');
        counter*=10;
        i++;
    }

    sum=sum+count/counter;

    if(isnegative)
    {
        sum=-sum;
    }

    return sum ;
}

int main(void)
{
    char arr[20];
    printf("enter a float:\n");
    fgets(arr,sizeof(arr),stdin);

    printf("the character string in float  is :%f",f(arr));

    return 0;

}

