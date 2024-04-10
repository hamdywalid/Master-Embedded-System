/*
 ============================================================================
 Name        : Structures_Union_Enum_C__Homework1__EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
 struct Distance{
     float feed;
     float inch;
 }Dis_1,Dis_2,sum;
int main() {
    printf("enter Distance_1: ");
    scanf(" %f",&Dis_1.feed);
    printf("enter inch_1: ");
    scanf(" %f",&Dis_1.inch);

    printf("enter Distance_2: ");
    scanf(" %f",&Dis_2.feed);
    printf("enter inch_2: ");
    scanf(" %f",&Dis_2.inch);

    sum.feed=Dis_1.feed+Dis_2.feed;
    sum.inch=Dis_1.inch+Dis_2.inch;

    printf("sum of dis in feed: %f\n",sum.feed);
    printf("sum of dis in inch: %f",sum.inch);
    return 0;
}
