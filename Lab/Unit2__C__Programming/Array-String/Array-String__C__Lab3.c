/*
 ============================================================================
 Name        : Basic_C__Lab1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
   float a[3][3];
   int r,c;
   float t[3][3];
   for(r=0;r<3;r++){
	   for(c=0;c<3;c++){
		   printf("Enter the items (%d,%d):",r,c);
		   scanf("%f",&a[r][c]);
	   }
   }
   printf("the matrix is \n");
   for(r=0;r<3;r++){
	   for(c=0;c<3;c++){

		   printf("%f\t",a[r][c]);
	   }
	   printf("\r\n");
   }
   printf("the transpose matrix is \n");
      for(r=0;r<3;r++){
	   for(c=0;c<3;c++){

		   t[r][c]=a[c][r];
	   }
   }
      for(r=0;r<3;r++){
	   for(c=0;c<3;c++){

		   printf("%f\t",t[r][c]);
	   }
	   printf("\r\n");
   }
   return 0;
}
