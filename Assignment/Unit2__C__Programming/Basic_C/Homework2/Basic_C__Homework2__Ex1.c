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
	int x,y;
	printf("Enter The Number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	y=x%2;
    if(y==0){
        printf("\neven");
    }
    else{
        printf("\nodd");
    }
	return 0;
}




