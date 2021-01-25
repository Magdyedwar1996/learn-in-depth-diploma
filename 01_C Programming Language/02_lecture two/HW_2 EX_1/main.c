// This project is for checking whether a number is even or odd
#include <stdio.h>
#include <stdlib.h>


int main()

{

    int num ;
    while (1)
    {
    printf("enter your number : ");
    scanf("%d",&num) ;

    if (num==0)
        printf("you entered zero \n");
    else if (num%2==0)
        printf("%d is an even number \n",num);
    else
        printf("%d is an odd number \n" , num) ;

    }
        return 0;

}
