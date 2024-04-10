// Online C compiler to run C program online
#include <stdio.h>
//struct Sdata{
//     unsigned char data1;
//     unsigned int  data2;
//     unsigned char data3;
//     unsigned short data4;
// };
// int main() {
//     struct Sdata x;
//     printf("%d",sizeof(struct Sdata));

//     return 0;
// }



// struct SEmployee{
//   char m_Name[50];
//   int  m_BirthDateDay;
//   int  m_BirthDatemonth;
//   int  m_BirthDateYear;
//   int  m_Salary;
// };
// struct SEmployee x,y,z;
// int main() {
//   strcpy(x.m_Name,"hamdy walid");
//   x.m_BirthDateDay=22;
//   x.m_BirthDatemonth=12;
//   x.m_BirthDateYear=1980;
//   x.m_Salary=50;
//   printf("X contains(%s, %d/%d/%d , %d )\n",x.m_Name,
//             x.m_BirthDateDay,x.m_BirthDatemonth,
//             x.m_BirthDateYear,      x.m_Salary);
  
//   //copy member of x in y
//   strcpy(y.m_Name,x.m_Name); 
//   y.m_BirthDateDay= x.m_BirthDateDay;
//   y.m_BirthDatemonth=x.m_BirthDatemonth;
//   y.m_BirthDateYear=x.m_BirthDateYear;
//   y.m_Salary=x.m_Salary;
//      printf("y contains(%s, %d/%d/%d , %d )\n",y.m_Name,
//             y.m_BirthDateDay,y.m_BirthDatemonth,
//             y.m_BirthDateYear,      y.m_Salary);
            
//     z=x;   //copy struct x in struct z
//     printf("z contains(%s, %d/%d/%d , %d )\n",z.m_Name,
//             z.m_BirthDateDay,z.m_BirthDatemonth,
//             z.m_BirthDateYear,      z.m_Salary);
//     return 0;
// }



// // Online C compiler to run C program online
// #include <stdio.h>

// struct SDate{
//     int m_Day;
//     int m_Month;
//     int m_Year;
// };
// struct SEmployee{
//     char m_Name[50];
//     struct SDate m_BirthDate;
//     struct SDate m_GraduationDate;
//     int  m_Salary;
// };

// int main() {
//   struct SEmployee x={"hamdy walid",{22,12,1990},{2,7,1970},5000};
//   printf("X contains (%s , %d/%d/%d , %d/%d/%d , %d)",
//      x.m_Name,
//      x.m_BirthDate.m_Day,
//      x.m_BirthDate.m_Month,
//      x.m_BirthDate.m_Year,
//      x.m_GraduationDate.m_Day,
//      x.m_GraduationDate.m_Month,
//      x.m_GraduationDate.m_Year,
//      x.m_Salary);
  
//     return 0;
// }



// struct SDate{
//     int m_Day;
//     int m_Month;
//     int m_Year;
// };
// struct SEmployee{
//     char m_Name[50];
//     struct SDate m_BirthDate;
//     struct SDate m_GraduationDate;
//     int  m_Salary;
// };
// struct SDate ReadDate(char dateName[]){
//     struct SDate date;
//     printf("Enter $s :",dateName);
// }






// struct Scomplex{
//     double real;
//     double imaginary;
// }
// struct Scomplex ReadComplex (char name[]){
//     struct Scomplex c;
//     printf("%s",name);
//     scanf("%f , %f",&c.real,&c.imaginary);
//     return c;
// }
// struct Scomplex AddComplex ( struct Scomplex A, struct Scomplex B){
//     c.real=A.real + B.real;
//     c.imaginary=A.imaginary + B.imaginary;
//     return c;
// }
// void PrintComplex(char name[],struct Scomplex c){
//      printf("%s=(%f) +j (%f)",name,c.real,c.imaginary);
// }
// int main (){
//     struct Scomplex x,y,z;
//     x=ReadComplex("x");
//     y=ReadComplex("y");
//     z=AddComplex(x,y);
//     PrintComplex("Z",z);
// }
///////////////////////////////////////////////////////////////////////////////////////////
#include <stdlib.h>
// #include <stdio.h>
// struct Scomplex {
// 	double m_R;
// 	double m_I;
// };
// struct Scomplex readcomplex(char name[]){
// 	struct Scomplex C;
// 	printf("enter %s complex: ", name);
// 	scanf("%f, %f",&C.m_R,&C.m_I);
// 	return C;
// }
// struct Scomplex Addcomplex (struct Scomplex A,struct Scomplex B){
// 	struct Scomplex C;
// 	C.m_R=A.m_R+B.m_R;
// 	C.m_I=A.m_I+B.m_I;
// 	return C;
// }
// void printfcomplex( char name[], struct Scomplex C){
// 	printf("%s=(%1f) +j(%1f)\n",name,C.m_R,C.m_I);
// }
// void main(){
// 	struct Scomplex x,y,z;
// 	x=readcomplex("x");
// 	y=readcomplex("y");
// 	z=Addcomplex(x,y);
// 	printfcomplex("z",z);
// }





// struct status_type {
// unsigned char delta_cts:1;
// unsigned char delta_dsr:1;
// unsigned char tr_edge:1;
// unsigned char delta_rec:1;
// unsigned char cts:1;
// unsigned char dsr:1;
// unsigned char ring:1;
// unsigned char rec_line:1;
// } status;
// int main(int argt,char**argv){
//     status.cts=1;
//     printf("sizeof structure=%d",sizeof(status));
// }



// struct status_type {
// unsigned int delta_cts:1;
// unsigned int delta_dsr:1;
// unsigned int tr_edge:1;
// unsigned int delta_rec:1;
// unsigned int cts:1;
// unsigned int dsr:1;
// unsigned int ring:1;
// unsigned int rec_line:1;
// } status;
// int main(int argt,char**argv){
//     status.cts=1;
//     printf("sizeof structure=%d",sizeof(status));
// }



// struct status_type {
// unsigned char :4;
// unsigned char cts:1;
// unsigned char dsr:1;

// } status;
// int main(){
//     status.cts=1;
//     printf("sizeof structure=%d",sizeof(status));
// }



// struct status_type {
//   float pay;        //4b
//   unsigned  cts:1;  //4b
//   unsigned  dsr:1;
//   unsigned  rang:3;

// } status;
// int main(){
//     printf("sizeof structure=%d",sizeof(status));
// }

//struct sperson {
//   unsigned char  weight;
// }man;

// int main(){
//     struct sperson man={100};
//     printf("sizeof structure=%d",sizeof(struct sperson));
// }



// struct sperson {
//   unsigned char  weight;
//   unsigned int   age;
// }man;

// int main(){
//     struct sperson man={100,14};
//     printf("sizeof structure=%d",sizeof(struct sperson));
// }


// struct Sdata{
//     unsigned char data1;
//     unsigned int  data2;
//     unsigned char data3;
//     unsigned short data4;
// };
// struct Sdata gdata;

// int main() {
//     gdata.data1=0XAA;
//     gdata.data2=0xFFFFFFFF;
//     gdata.data3=0x55;
//     gdata.data4=0xA5A5;
//     int total_size=sizeof(struct Sdata);
//     printf("struct Sdata gdata = %d\n",sizeof(struct Sdata));
//     dump_memory(&gdata,total_size);
// }
// dump_memory(char* ptr,int size){
//     int i;
//     for(i=0;i<size;i++)
//     {
//         printf("%p   %x\n",ptr,(unsigned char)*ptr);
//         ptr++;
//     }
// }

///////////////////////////////////////
// #pragma pack(1)
// struct Sdata{
//     unsigned char data1;
//     unsigned int  data2;
//     unsigned char data3;
//     unsigned short data4;
// };
// struct Sdata gdata;

// int main() {
//     gdata.data1=0XAA;
//     gdata.data2=0xFFFFFFFF;
//     gdata.data3=0x55;
//     gdata.data4=0xA5A5;
//     int total_size=sizeof(struct Sdata);
//     printf("struct Sdata gdata = %d\n",sizeof(struct Sdata));
//     dump_memory(&gdata,total_size);
// }
// dump_memory(char* ptr,int size){
//     int i;
//     for(i=0;i<size;i++)
//     {
//         printf("%p   %X\n",ptr,(unsigned char)*ptr);
//         ptr++;
//     }
// }




////Enumerated Type Declaration
// enum boolean{true ,false};
// enum boolean cheak;
//
// enum boolean{
//      true ,false
//      }cheak;
  



// enum week {sunday,monday,tuesday,wenesday,thursday,friday,saturday};
// int main()
// {
//     enum week today;
//     today=thursday;
//     printf("day :%d",today+1);
// }





// enum suit {
//     club=0,
//     diamonds=10,
//     hearts=20,
//     spades =3,
// }card;
// int main()
// {
//     card= club;
//     printf("size of enum variable = %d bytes",sizeof(card));
//     return 0;
// }




// enum designflags {
//     bold=1,
//     italics=2,
//     underline=4,
    
// };
// int main()
// {
//     int mydesign = bold | underline;
//     printf(" %d",mydesign);
//     return 0;
// }

#include <stdio.h>
enum gender{male,female};
struct sperson{
    char m_name[100];
    enum gender m gender;
};

void main () {
    int i;
    struct sperson persons[]={
        {"ahmed ali",male}
    }
}


// union unum_value{
//     int    u_intvalue;
//     float  u_floatvalue;
//     double u_value;
// }
// union unum_value Add(union unum_value value1,union unum_value value2,enum numtype type  )
//   {
//     union unum_value result;
//     switch(type)
//     {
//         case INT:result.u_intvalue=value1.u_intvalue+value2.u_intvalue;
//         break;
//         case FLOAT:result.u_floatvalue=value1.u_floatvalue+value2.u_floatvalue;
//         break;
//         case DOUBLE:result.u_doublevalue=value1.u_doublevalue+value2.u_doublevalue;
//         break;
//     }
//     return result;
//   }
// int main() {
//     union unum_value v1,v2,R;
//     printf("%d",sizeof(union unum_value));
//     v1.u_intvalue=9898;
//     v2.u_intvalue=8776;
//     R= Add(v1,v2,INT);        //// argument 0 the first case in union unum_value Add (INT)
//     printf("int: %d + %d=%d\n",v1.u_intvalue,v2.u_intvalue);
//     v1.u_intvalue=98.98;
//     v2.u_intvalue=87.76;
//     R= Add(v1,v2,FLOAT);     //// argument 1 the second case in union unum_value Add  (FLOAT)
//     printf("float: %f + %f=%f\n",v1.u_floatvalue,v2.u_floatvalue);
//     v1.u_doublevalue=98.98;
//     v2.u_doublevalue=87.76;
//     R= Add(v1,v2,DOUBLE);    //// argument 2 the thrid case in union unum_value Add  (double)
//     printf("double: %f + %f=%f\n",v1.u_doublevalue,v2.u_doublevalue);
//     return 0;
// }




// union unionjob
// {
//     char  name[32];
//     float salary;
//     int   workerNO;
// }union_job;
// struct structjob
// {
//     char  name[32];
//     float salary;
//     int   workerNO;
// }struct_job;    
// int main() 
// {
//     printf("size of  union =%d\n",sizeof(union_job));
//     printf("size of struct =%d\n",sizeof(struct_job));
//     return 0;
// }