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
	char choice;
	float radius,area,circumference;


	printf("enter circle radius:");
	fflush(stdin);fflush(stdout);

	scanf("%f",&radius);
	printf("enter your choice area or circumference ");
	fflush(stdin);fflush(stdout);

	scanf("%c",&choice);

	if(choice == 'a')
	{
	 area=3.14 * radius * radius;
	 printf("\r\n area %f \r\n",area);
	}
	 else if(choice == 'c')
	{
	 circumference=2*3.14*radius;
     printf("\r\n circumference %f \r\n", circumference);
	}
	 else
	{
	 printf("\r\n wrong choice \r\n");
	}

}
