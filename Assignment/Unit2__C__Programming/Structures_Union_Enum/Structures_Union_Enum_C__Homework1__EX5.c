/*
 ============================================================================
 Name        : Structures_Union_Enum_C__Homework1__EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct area{
     float pi;
     float radius;
 }area_1;
int main() {
     area_1.pi=3.14;
    printf("enter the radius of circle :");
    scanf(" %f",&area_1.radius);

    printf("area of circle :%f",2*area_1.pi*area_1.radius);

    return 0;
}
