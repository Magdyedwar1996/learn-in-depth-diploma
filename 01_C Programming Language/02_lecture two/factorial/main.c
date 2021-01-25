#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num , factorial =1 ;
 printf("enter a number : ");
 scanf("%d", &num);
 num++;
if (num>0)
    {
        for (int i = num ; num > 1 ; num--)
        {
            factorial *= (num-1);
        }
        printf("the factorial is : %d",factorial );
    }
else if (num == 0 )
    {
            printf("the factorial is 1");
    }
else
    printf("you entered an incorrect number ");










    return 0;
}
