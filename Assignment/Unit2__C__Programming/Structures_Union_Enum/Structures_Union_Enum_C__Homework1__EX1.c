/*
 ============================================================================
 Name        : Structures_Union_Enum_C__Homework1__EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

 struct student{
     char name[20];
     int roll_number;
     float marks;
 }stud;
int main() {
    printf("enter your name: ");
    scanf(" %s",stud.name);
    printf("enter your roll_number: ");
    scanf(" %d",&stud.roll_number);
    printf("enter your marks: ");
    scanf(" %f",&stud.marks);

    printf("name: %s\n",stud.name);
    printf("roll_number: %f\n",stud.roll_number);
    printf("enter your marks: %d\n",stud.marks);
    return 0;
}
