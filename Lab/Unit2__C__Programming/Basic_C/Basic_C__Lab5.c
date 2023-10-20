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

	int i,nstudent;
	float degree,sum;
	printf("Enter the number of the students:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&nstudent);
	for(i=1,sum=0;i<=nstudent;i++){
		printf("Enter students (%d) degree:",i);
		fflush(stdin);fflush(stdout);
		scanf("%f",&degree);
		sum+=degree;
	}
	printf("average :%f  \n",sum/nstudent);
}
