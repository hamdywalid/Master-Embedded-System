/*
 ============================================================================
 Name        : Function_C__Homework1__Ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int power(int num, int Pow);
int main() {
    int num,Pow,res;
    printf("enter the number:");
    scanf("%d",&num);
    printf("enter the power:");
    scanf("%d",&Pow);
    res=power(num,Pow);
    printf("%d",res);

}
int power(int num, int Pow){
    if(Pow !=0)
     return (num*power(num,Pow-1));
    else{
    return 1;
    }
}
