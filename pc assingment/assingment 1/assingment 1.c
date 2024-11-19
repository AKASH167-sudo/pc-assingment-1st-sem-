#include<stdio.h>
#include"variableswap.h"

int main(void)
{
    int x,y;

    printf("enter two numbers:");
    scanf("%d%d",&x,&y);

    swapusingmem(&x,&y,sizeof(int));

    printf("%d\n%d",x,y);

    return 0;
}
