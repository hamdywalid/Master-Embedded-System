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


int main() {
    float x,sum;
	printf("Enter The  numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	for(int i ; x>=i;i++)
	{
	    sum+=i;
	}
	printf("sum:%f",sum);
}
