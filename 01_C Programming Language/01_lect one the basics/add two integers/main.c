//Write C Program to Add Two Integers

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_1 , num_2 , sum  ;
    printf("enter two integers ");
    scanf("%d%d", &num_1, &num_2);
    sum = num_1 + num_2 ;
    printf("the summation is : %d " , sum );
    return 0;
}
