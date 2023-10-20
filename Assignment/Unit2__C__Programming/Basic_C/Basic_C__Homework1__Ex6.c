/*
 * main.c
 *
 *  Created on: Sep 28, 2023
 *      Author: DELL
 */

//  EX1:

#include <stdio.h>
#include <stdlib.h>



int main (void) {
	float x,y;
	float swap;
	printf("Enter value of a:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	printf(" Enter value of b:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&y);
	swap=x;
	x=y;
	y=swap;
	printf("After swapping, value of x: %f",x);
	printf("\nAfter swapping, value of y: %f",y);
	return 0;
}







