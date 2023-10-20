/*
 ============================================================================
 Name        : Array-String__C__Homework2__EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <string.h>
int main() {
    char names[5][20]={"alaa","hamdy","samy","hassain","ahmed"};
    char name[14];
    int i;
    fflush(stdin);fflush(stdout);
    printf("enter your name:\n\r");
    scanf("%s",name);

    for(i=0;i<5;i++){
        if(strcmp(name,names[i])==0){
            printf("congratulation, your name is in list");
            break;
        }
        }
    if(i==5){
            printf(" your name is not list");
    }
    return 0;
}
