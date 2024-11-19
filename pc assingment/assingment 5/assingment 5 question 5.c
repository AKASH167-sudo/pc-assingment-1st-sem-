#include<stdio.h>
#include<stdbool.h>


int f(char* a) //function to return an  integer which is equal to the string's elememts
{
    bool isnegative=false;
    int i=0;

    if(a[0]=='-')
    {
        isnegative=true; // condition if the input is a negative integer
        i=1;
    }
    int returns=0;
    for(;a[i]!='\n';i++) // fgets stores the string with its end element as \n
    {                    // that is why loop runs till it reaches newline character
        returns =returns*10 + a[i]-'0';
    }
    if(isnegative)
    {
        returns =-returns; // is input is negative , result is also converted to negative
    }

    return returns;
}




int main(void)
{
    char arr[20];
    int z[20];

    printf("enter a number:");
    fgets(arr,sizeof(arr),stdin);
// calling function to print in integer format
    printf("%d",f(arr));

    return 0;

}
