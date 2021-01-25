#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operand ;
    float num1 , num2 , summation , multiply , subtraction , division ;
    while(1)
    {
       // scanning el operand from the user
    printf("Enter an operand '+' , '-' , '*' or  '/' : \n");
    scanf("%c", &operand );

        // scanning el two numbers from the user
    printf("Enter two numbers : \n");
    scanf("%f%f", &num1,&num2);


    switch(operand)
       {

        // case el summation of two numbers
    case '+' :
             summation = num1 + num2 ;
             printf("The result of the summation is : %f\n", summation);
             break ;

        // case el subtraction of two numbers
    case '-' :
            subtraction = num1 - num2 ;
            printf("The result of the subtraction is : %f \n", subtraction);
            break ;

       // case el multiplication   of two numbers
    case '*':
             multiply = num1*num2 ;
             printf("The result of the multiplication is : %f\n",multiply);
             break ;

   // case el division  of two numbers
    case '/':
            division = num1 / num2 ;
            printf("the result of the division is : %f\n", division);
            break ;


    default :
            printf("Sorry you entered an incorrect operand ");
       }
    }

    return 0;
}
