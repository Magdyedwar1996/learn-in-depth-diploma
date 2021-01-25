#include <stdio.h>
#include <stdlib.h>

int main()
{
 char character ;
 printf("enter a character to check if it is an alphabet or not:");
 scanf("%c", &character);
 if ((character>=65 && character<=90)||(character>=97 &&character<=122))
    printf("%c is an alphabet", character);
 else
    printf("%c is not an alphabet ", character);

    return 0;
}
