/*
 ============================================================================
 Name        : EX1.c
 Author      : magdy edwar
 Version     :
 Copyright   : Your copyright notice
 Description : , Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[2][2]; // init first array
	float b[2][2]; // init second array
	float c[2][2]; // init array of sum

	printf("Enter the elements of 1st matrix\n"); 	//message for enter numbers for first array

	for (int i=0 ;i<2;i++){ 	 //outer loop in first array
		for(int y=0; y<2;y++){  	// inner loop in first array
			printf("Enter a%d%d",i+1,y+1); 		//print number of index of array a
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&a[i][y]);    	//save number in the same index
		}
	}


	printf("\nEnter the elements of 2nd matrix\n");	//message for enter numbers for second array

	for (int i=0 ;i<2;i++){		//outer loop in first array
		for(int y=0; y<2;y++){		// inner loop in first array
			printf("Enter b%d%d",i+1,y+1);		//print number of index of array b
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&b[i][y]);		//save number in the same index
		}
	}


	printf("\nSum Of Matrix\n");

	for (int i=0 ;i<2;i++){ 	//outer loop in array of sum
		for(int y=0; y<2;y++){		// inner loop in first array of sum
			c[i][y]=a[i][y]+b[i][y];
			printf("%.1f\t",c[i][y]); 	//print sum of a and b
		}
		printf("\n");
	}


}



