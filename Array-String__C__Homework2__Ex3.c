/*
 ============================================================================
 Name        : Basic_C__Homework2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    int i;
    printf("enter your name:");
    scanf("%s",name);
    printf("name is \"%s\" the length is: %d\n",name,strlen(name));

    for(i=0;i<6;i++){
        printf("%c",name[i]);
    }
    printf("\n");
    for(i=0;i<6;i++){
        printf("%c",name[strlen(name)-i]);
    }
        return 0;
    }

