/*
 ============================================================================
 Name        : Structures_Union_Enum_C__Homework1__EX6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct job_1{
    char namr[50];
    float salary;
    int   num_work;
 }job_1_s;

 union job_2{
    char namr[50];
    float salary;
    int   num_work;
 }job_2_u;
int main() {

    printf("size of struct job_1 :%d\n",sizeof(job_1_s));
    printf("size of union  job_2 :%d\n",sizeof(job_2_u));

    return 0;
}
