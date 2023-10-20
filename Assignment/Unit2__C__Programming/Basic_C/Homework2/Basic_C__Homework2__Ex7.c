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

int main () {
	int x,count;
	unsigned long  int y=1;
	printf("enter the number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);

	for(count=1;count<=x;count++){
		y*=count;
	}
	printf("factorial: %1u", y);
	return 0;
}





