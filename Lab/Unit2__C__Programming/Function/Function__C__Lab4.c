/*
 ============================================================================
 Name        : Function__C__Lab4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int global_var;
void file1_func1();

int main() {
	global_var =7;
	file1_func1();
	printf("%d",global_var);
	return 0;

}
