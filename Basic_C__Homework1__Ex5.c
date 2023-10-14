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
	char x;
	printf("Enter a character:\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	printf("\n ASCII value of %c :%d",x,x);
	return 0;
}




