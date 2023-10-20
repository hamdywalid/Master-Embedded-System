/*
 ============================================================================
 Name        : Array-String__C__Homework2__EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <string.h>
int main() {
    char name[14];
    int i=0;
    printf("enter your name:");
    scanf("%s",name);
    for(int i=0;name[i]!='\0';i++);
    printf("the length is: %d",i);
    //printf("name is \"%s\" the length is: %d",name,strlen(name));
    return 0;
}
