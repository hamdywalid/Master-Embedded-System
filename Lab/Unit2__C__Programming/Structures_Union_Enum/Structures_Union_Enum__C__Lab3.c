/*
 ============================================================================
 Name        : c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)
struct Sdata{
    unsigned char data1;
    unsigned int  data2;
    unsigned char data3;
    unsigned short data4;
};
struct Sdata gdata;

int main() {
    gdata.data1=0XAA;
    gdata.data2=0xFFFFFFFF;
    gdata.data3=0x55;
    gdata.data4=0xA5A5;
    int total_size=sizeof(struct Sdata);
    printf("struct Sdata gdata = %d\n",sizeof(struct Sdata));
    dump_memory(&gdata,total_size);
}
dump_memory(char* ptr,int size){
    int i;
    for(i=0;i<size;i++)
    {
        printf("%p   %X\n",ptr,(unsigned char)*ptr);
        ptr++;
    }
}

