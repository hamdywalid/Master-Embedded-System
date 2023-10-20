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
	char x,y;
	printf("Enter The  alphabet:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);

    printf("\n%d",x);
    switch(x)
    {
     case('a'):
     case('i'):
     case('u'):
     case('o'):
     case('e'):
     printf("\nvowel");
     break;
     default:
     printf("\nConsonants");
    }
}


