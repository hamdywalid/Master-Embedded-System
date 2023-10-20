/*
 ============================================================================
 Name        : Basic_C__Lab1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int x,y;
	printf("Enter values number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("the maximum is %d",(x>y)? x:y);




}
