/*
 * func_3.h
 *
 *  Created on: Sep 9, 2020
 *      Author: magdy
 */

#ifndef FUNC_3_H_
#define FUNC_3_H_
void func_3()
{
	int x = 0xff001234 ;
	int  y =  (short)x ;
	printf("\nthe y value after casting to short  is : %d", y);

	y =  (char)x ;
	printf("\n====================================\n");

	printf("\nthe y value is after casting to char is  : %d", y);



}


#endif /* FUNC_3_H_ */
