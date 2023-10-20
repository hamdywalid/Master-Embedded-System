/*
 ============================================================================
 Name        : Array-String__C__Homework1__EX2
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
   int data[20];
   int i;
   float avg,sum,x;
   printf("Enter the number of data:\n");
   scanf("%f",&x);
   for(i=0;x>i;i++){
       printf("enter number %d:\r",i);
	   scanf("%d",&data[i]);
       sum+=data[i];
   }
   printf("average:%4.2f",sum/x);
   return 0;
}

