/*
 ============================================================================
 Name        : Structures_Union_Enum__C__Lab1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

 struct Scomplex{
     float real;
     float imaginary;
 };
 struct Scomplex ReadComplex (char name[]){
    struct Scomplex C;
    printf("enter comp.real: ");
    scanf(" %f",&C.real);
    printf("enter comp.imaginary: ");
    scanf(" %f",&C.imaginary);
     return C;
 }
 struct Scomplex AddComplex ( struct Scomplex A, struct Scomplex B){
	 struct Scomplex C;
     C.real=A.real + B.real;
     C.imaginary=A.imaginary + B.imaginary;
     return C;
 }
  void PrintComplex(char name[],struct Scomplex C){
	  printf("(%f) +j(%f)",C.real,C.imaginary);
 }
  int main(){
     struct Scomplex x,y,z;
     x=ReadComplex("x");
     y=ReadComplex("y");
     z=AddComplex(x,y);
     PrintComplex("Z",z);
 }
//////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
 struct Scomplex{
     double real;
     double imaginary;
 };
 struct Scomplex ReadComplex (char name[]){
     struct Scomplex C;
     printf("%s",name);
     scanf("%f , %f",&C.real,&C.imaginary);
     return C;
 }
 struct Scomplex AddComplex ( struct Scomplex A, struct Scomplex B){
	 struct Scomplex C;
     C.real=A.real + B.real;
     C.imaginary=A.imaginary + B.imaginary;
     return C;
 }
  void PrintComplex(char name[],struct Scomplex C){
	  printf("%s=(%f) +j(%f)",name,C.real,C.imaginary);
 }
  int main(){
     struct Scomplex x,y,z;
     x=ReadComplex("x");
     y=ReadComplex("y");
     z=AddComplex(x,y);
     PrintComplex("Z",z);
 }
