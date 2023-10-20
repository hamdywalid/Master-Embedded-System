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
	float x;
	printf("Enter The  numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	if(x>0)
	{
	 printf("positive: %f",x);
	}
	else if(x<0)
	{
	 printf("negative: %f",x);
	}
	else if(x==0)
	{
	 printf("zero: %f",x);
	}
}

