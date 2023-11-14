/*
 ============================================================================
 Name        : Function_C__Homework1__Ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int factorial(int y);

int main() {
    int x,y;
    printf("enter the number:");
    scanf("%d",&x);
    y=x;
    printf("f:%d",factorial(y));
    return 0;
}

int factorial(int y){
    int f=1;
    for(;y>1;y--)
    f*=y;
    return f;
}
