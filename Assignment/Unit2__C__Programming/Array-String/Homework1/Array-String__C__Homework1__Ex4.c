/*
 ============================================================================
 Name        : Array-String__C__Homework1__EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float matrix[7];
    int i,x,y;
    fflush(stdin);fflush(stdout);
    for(i=0;i<6;i++){
        printf("enter the items (%d):",i);
        scanf("%f",& matrix[i]);
        }

    printf("the matrix\n");
    for(i=0;i<6;i++){
        printf("%10.2f",matrix[i]);
    }

    printf("\nenter the elements to be inserted :");
    scanf("%d",&x);
    printf("enter the location :");
    scanf("%d",&y);

    for(i=7; i>=y ;i--){
        matrix[i]=matrix[i-1];
    }

    matrix[y-1]=x;
    printf("%10.2f\n",matrix[y]);

    printf("the matrix\n");
    for(i=0;i<7;i++){
        printf("%10.2f ",matrix[i]);
    }
    return 0;
}

