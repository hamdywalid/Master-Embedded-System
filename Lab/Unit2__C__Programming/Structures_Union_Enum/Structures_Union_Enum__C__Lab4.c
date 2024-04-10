/*
 ============================================================================
 Name        : Structures_Union_Enum__C__Lab4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

union unum_value{
    int    u_intvalue;
    float  u_floatvalue;
    double u_value;
}
union unum_value Add(union unum_value value1,union unum_value value2,enum numtype type  )
  {
    union unum_value result;
    switch(type)
    {
        case INT:result.u_intvalue=value1.u_intvalue+value2.u_intvalue;
        break;
        case FLOAT:result.u_floatvalue=value1.u_floatvalue+value2.u_floatvalue;
        break;
        case DOUBLE:result.u_doublevalue=value1.u_doublevalue+value2.u_doublevalue;
        break;
    }
    return result;
  }
int main() {
    union unum_value v1,v2,R;
    printf("%d",sizeof(union unum_value));
    v1.u_intvalue=9898;
    v2.u_intvalue=8776;
    R= Add(v1,v2,INT);        //// argument 0 the first case in union unum_value Add (INT)
    printf("int: %d + %d=%d\n",v1.u_intvalue,v2.u_intvalue);
    v1.u_intvalue=98.98;
    v2.u_intvalue=87.76;
    R= Add(v1,v2,FLOAT);     //// argument 1 the second case in union unum_value Add  (FLOAT)
    printf("float: %f + %f=%f\n",v1.u_floatvalue,v2.u_floatvalue);
    v1.u_doublevalue=98.98;
    v2.u_doublevalue=87.76;
    R= Add(v1,v2,DOUBLE);    //// argument 2 the thrid case in union unum_value Add  (double)
    printf("double: %f + %f=%f\n",v1.u_doublevalue,v2.u_doublevalue);
    return 0;
}
