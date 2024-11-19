#include<stdio.h>
#include<string.h>

int no(char *a)  // function to find the position of the null terminator in the string
{
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='\0')
        {
            return i;
        }
    }
}

int f(char*a, int j) // function to print the number in reverse order using the position of the null terminator
{
    for(int i=j-1;i>=0;i--)
    {
        printf("%c",a[i]); // %c format specifier is used because strings or character arrays store elements as char data types
    }

    return 0;
}

int main(void)
{
    char arr[20];

    printf("enter the number:");

    fgets(arr,sizeof(arr),stdin);

    int j=no(arr);

    // calling f to print the digits in reverse
    f(arr,j);

    return 0;
}
