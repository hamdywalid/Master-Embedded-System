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

int main (){
	char c;
	printf("enter a character:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	if( (c>='a'&& c<='z') || (c>='A' && c<='Z') )
	   printf("%c is alphabet",c);
	else
	   printf("%c is not alphabet",c);
	return 0;
	}

