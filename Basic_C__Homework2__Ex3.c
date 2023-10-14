/*
 ============================================================================
 Name        : Basic_C__Homework2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>




int main (void) {
	float x,y,z;
	printf("Enter The  numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if(x>y && x>z)
	{
	 printf("x is the largest:%f",x);
	}
	else if(y>x && y>z)
	{
	 printf("y is the largest:%f",y);
	}
	else if(z>x && z>y)
	{
	 printf("z is the largest:%f",z);
	}
}


