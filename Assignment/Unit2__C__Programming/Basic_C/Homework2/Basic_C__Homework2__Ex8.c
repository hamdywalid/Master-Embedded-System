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
	float x,y;
	char op;
	printf("enter the number and operator :");
	scanf("%f%c%f",&x,&op,&y);

	switch(op){
	case '+':
		printf("%f+%f, addition :%f",x,y,x+y);
		break;
	case '-':
		printf("%f-%f, subtraction :%f",x,y,x-y);
		break;
	case '*':
		printf("%f*%f, multiplication :%f",x,y,x*y);
		break;
	case '/':
		printf("%f/%f, division :%f",x,y,x/y);
		break;
	}
	return 0;
}


