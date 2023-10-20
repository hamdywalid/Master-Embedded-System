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


int main() {
    int arr[40];
    int i=0,num,x;


    printf("enter no of elements:");
    scanf("%d",&num);


    printf("Enter the values:");
    for(i=0; i< num ;i++){
    	scanf("%d",&arr[i]);
    }

    printf("\n enter the number to search :\n");
    scanf("%d",&x);

    while(i< num && x!=arr[i]){
      i++;
    }

    if (i< num){
        printf("number found= %d ",i+1);
    }else {
       printf("number not found\n");
    }

    return 0;
}
