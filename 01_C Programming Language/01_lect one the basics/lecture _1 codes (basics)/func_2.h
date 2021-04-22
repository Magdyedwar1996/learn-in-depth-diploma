/*
 * func_2.h
 *
 *  Created on: Sep 9, 2020
 *      Author: magdy
 */

#ifndef FUNC_2_H_
#define FUNC_2_H_

void func_2()
{
	double A = 1.2 ;
	printf("\nthe size of A before casting is : %d\n",sizeof(A));
	float sum = (int)A + 1 ;
	printf("\n the size of A after casting is : %d\n",sizeof(A));
	printf("\n the sum is : %f\n", sum );
	printf(" the size of sum is : %d\n",sizeof(sum));



}

#endif /* FUNC_2_H_ */
