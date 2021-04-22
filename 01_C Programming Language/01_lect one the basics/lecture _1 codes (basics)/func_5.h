/*
 * func_5.h
 *
 *  Created on: Sep 10, 2020
 *      Author: magdy
 */

#ifndef FUNC_5_H_
#define FUNC_5_H_
void func_5()
{
	int sum = 0 ;
	for (int x=0 , y = 20 ; x!=y ; x++, y-- )
		{
	      printf("%d * %d  = %d\n",x , y , x*y);

		}

	for (int i =0 ; i<100 ; i++)
		{
		sum+= i ;


		}
	printf("the summation of i from 0 to 99 is : %d ", sum );



}


#endif /* FUNC_5_H_ */
