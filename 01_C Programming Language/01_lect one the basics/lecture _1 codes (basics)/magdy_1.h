/*
 * magdy_1.h
 *
 *  Created on: Sep 10, 2020
 *      Author: magdy
 */

#ifndef MAGDY_1_H_
#define MAGDY_1_H_

void func_6()
{
	int num ;
printf("\nenter your number : ");
fflush(stdin);
fflush(stdout);
scanf("%d",&num);


if (num== 60)
	goto degree_60 ;
else if (num==70 )
	goto degree_70 ;
else if (num==80)
	goto degree_80 ;
else
	printf("we are sorry to tell you that you failed ");



degree_60 :
	printf("you are good ");
degree_70 :

	printf("you are very good \n");
	//printf("thanks for your efforts , keep going ");

degree_80 :
	printf("you are excellent ");

}


#endif /* MAGDY_1_H_ */
