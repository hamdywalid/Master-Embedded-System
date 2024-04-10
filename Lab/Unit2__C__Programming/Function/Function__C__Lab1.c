/*
 ============================================================================
 Name        : Function__C__Lab1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <math.h>


int factorial(int x) {
    int f=1;
    for(;x>0;x--)
    f*=x;
    return f;
}
int main (){

    printf("factorial(%d): %d",10,factorial(10));
    return 0;
}
