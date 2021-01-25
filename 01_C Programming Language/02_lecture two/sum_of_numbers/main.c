#include <stdio.h>
#include <stdlib.h>

int main()
{
    while (1)
    {
int num , i=0 , sum=0 ;

 printf("enter the number you want to sum to : ");
 scanf("%d", &num);
 while ( i<=num )
 {
            sum+=num ;
            i ++ ;
 }
printf("the summation of the numbers is : %d\n\n", sum);
    }
    return 0;
}
