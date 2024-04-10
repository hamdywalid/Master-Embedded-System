/*
 ============================================================================
 Name        : Structures_Union_Enum_C__Homework1__EX4.c
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

 struct student{
     char name[20];
     float roll_number;
     float marks;
 }stud[3];
int main() {
    int i;
    for(i=1;i<3;++i){
    printf("enter your name [%d]: ",i);
    scanf(" %s",stud[i].name);
    printf("enter your roll_number [%d]: ",i);
    scanf(" %f",&stud[i].roll_number);
    printf("enter your marks: [%d]: ",i);
    scanf(" %f",&stud[i].marks);
    }

    for(i=1;i<3;++i){
    printf("name: %s\n",stud[i].name);
    printf("roll_number: %f\n",stud[i].roll_number);
    printf("enter your marks: %f\n",stud[i].marks);
    }
    return 0;
}
