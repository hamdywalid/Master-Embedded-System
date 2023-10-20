/*
 ============================================================================
 Name        : Array-String__C__Homework1__EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>


// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    float m[2][3];
    float t[3][2];
    int i,j;
    fflush(stdin);fflush(stdout);
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
        printf("enter the items (%d,%d):",i,j);
        scanf("%f",& m[i][j]);
        }
    }
    printf("the matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){

        printf("%f    ", m[i][j]);
        }
        printf("\n\r");
    }

        printf("the transpose matrix\n");
    for(j=0;j<3;j++){
        for(i=0;i<2;i++){
            t[j][i]=m[i][j];
        printf("%f    ", t[j][i]);
        }
        printf("\n\r");
    }
    return 0;
}
