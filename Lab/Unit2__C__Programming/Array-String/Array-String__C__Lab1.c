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
   int i;
   float degrees [10];
   for(i=0;i<10;i++)
   {
	printf("\nEnter the Student %d degree:",i+1);
	fflush(stdin);fflush(stdout);
	scanf("%f",&degrees[i]);
   }
   for(i=0;i<10;i++)
   {
	printf("\nStudent %d degree is %f",i+1,degrees[i]);
   }
   return 0;
}
