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
   float x[5]={5,16,22,3.5,15};
   float y;
   int   i;
   for(i=0;i<5;i++)
   {
	y=5*x[i]*x[i]+3*x[i]+2;
	fflush(stdin);fflush(stdout);
	printf("y(%f) = %f\r\n",x[i],y);
   }
}
