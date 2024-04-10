/*
 ============================================================================
 Name        : Structures_Union_Enum_C__Homework1__EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

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
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
 struct Scomplex{
     float real;
     float imaginary;
 }comp_1,comp_2,sum;

  int main(){
    printf("enter comp_1.real: ");
    scanf(" %f",&comp_1.real);
    printf("enter comp_1.imaginary: ");
    scanf(" %f",&comp_1.imaginary);

    printf("enter comp_2.real: ");
    scanf(" %f",&comp_2.real);
    printf("enter comp_2.imaginary: ");
    scanf(" %f",&comp_2.imaginary);

    sum.real=comp_1.real+comp_2.real;
    sum.imaginary=comp_1.imaginary+comp_2.imaginary;
    printf("(%f) +j(%f)",sum.real,sum.imaginary);
 }
