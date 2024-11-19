#include<stdio.h>
#include<stdbool.h>

int f(char *a)
{
    int sum =0;
    int i=0;

    bool isnegative=false;

    if(a[i]=='-')
    {
        isnegative=true;
        i++;
    }

    for(i;a[i]!='\n';i++)
    {
        sum = sum*10 + a[i]-'0';
    }

    if(isnegative)
    {
        sum=-sum;
    }

    return sum;
}

int main(void)
{
    char arr[20];
    printf("enter a integer:\n");
    fgets(arr,sizeof(arr),stdin);

    printf("the character string in integer is :%d",f(arr));

    return 0;

}
