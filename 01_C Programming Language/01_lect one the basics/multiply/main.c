//Write C Program to Multiply two Floating Point Numbers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n , m , product ;
    printf("enter two floating numbers : ");
    scanf("%f%f", &n , &m);
    product = n * m ;
    printf("product : %f ", product);
    return 0;
}
