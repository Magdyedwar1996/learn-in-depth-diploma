//Write Source Code to Swap Two Numbers

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a , b , temp ;
    printf("Enter value of a :   ");
    scanf("%f", &a);
    printf("Enter value of b : ");
    scanf("%f", &b);
    temp = a ;
    a = b ;
    b = temp ;
    printf("after swapping the value of a is : %f \n", a);
    printf("after swapping the value of b is : %f \n" , b );
    return 0;
}
