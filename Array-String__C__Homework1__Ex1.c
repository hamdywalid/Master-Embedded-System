/*
 ============================================================================
 Name        : Array-String__C__Homework1__EX1
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float x[2][2],y[2][3],z[2][2];
    int i,j;
    fflush(stdin);fflush(stdout);
    printf("Enter the element x matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("enter the items (%d,%d):\n",i,j);
        scanf("%f",& x[i][j]);
        }
    }
    printf("Enter the element y matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("enter the items (%d,%d):\n",i,j);
        scanf("%f",& y[i][j]);
        }
    }
    printf("the x matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){

        printf("%f    ", x[i][j]);
        }
        printf("\n\r");
    }
    printf("the y matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){

        printf("%f    ", y[i][j]);
        }
        printf("\n\r");
    }
    printf("sum of matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){

        z[i][j]=x[i][j]+y[i][j];
        printf("%f    ", z[i][j]);
        }
        printf("\n\r");
    }
    return 0;
}

