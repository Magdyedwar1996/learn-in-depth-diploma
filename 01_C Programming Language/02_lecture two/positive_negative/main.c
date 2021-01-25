#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num ;
    printf("enter a number to check whether is a positive or negative : ");
    scanf("%f",&num) ;
    if (num >0 )
        printf("this number is positive ");
    else if (num < 0)
        printf("this number is negative ");
    else
        printf("this number is zero ");
    return 0;
}
