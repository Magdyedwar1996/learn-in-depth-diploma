//Write Source Code to Swap Two Numbers without temp variable.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a  , b ;
    printf("enter the value of a : \n");
    scanf("%d", &a);
    printf("enter the value of b : \n");
    scanf("%d", &b);
    a = a + b ;
    b = a - b ;
    a = a - b ;
    printf("the value of a is : %d \n", a);
    printf("the value of b is : %d ", b);

    return 0;
}
