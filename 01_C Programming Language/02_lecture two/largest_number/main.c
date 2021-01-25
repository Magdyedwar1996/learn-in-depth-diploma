#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2 , n3 ;
    printf("enter your three numbers : ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if (n1>n2)
       {
        if (n1>n3)
            printf("%d is the largest number .", n1);
        else
            printf("%d is the largest number .", n3);
        }


     else if (n2>n1)
     {
         if (n2>n3)
            printf("%d is the largest number .", n2);
         else
            printf("%d is the largest number ", n3);
     }

    return 0;
}
