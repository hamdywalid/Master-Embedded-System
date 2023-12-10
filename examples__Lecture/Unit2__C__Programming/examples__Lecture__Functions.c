#include <stdio.h>
#include <string.h>
#include <math.h>

// float calcm(float x,float y) {
//     float m= 5*(x+y)*(x+y) + 3*x + 2*y + 2;
//     return m;
// }
// void main (){
//     float z=(calcm(2,2)+sqrt(pow(calcm(6,1.5),3.2f)+calcm(5,3.4)))/calcm(13,1.20);
//     printf("z:%f",z);
// }



// void printwelcome() {
//     printf("==========================\n");
//     printf("==========welcome=========\n");
//     printf("==========================\n");
// }
// void main (){
    
//     printwelcome();
// }



//int factorial (int x);
// int main() {
//     // Write C code here
//     printf("f=%d\n",factorial (5));
//     printf("f=%d",factorial (4));
//     return 0;
// }
// int factorial (int x){
//     int f=1;
//     for(;x>0;x--)
//     f*=x;
//     return f;
// }



// void trytomodify(int x,char text[]){
//     x++;
//     text[0]--;
// }
// int main() {
//     int v=5;
//     char name[5]="good";
//     printf("v=%d , name= %s\n",v,name);
//     trytomodify(v,name);
//     printf("v=%d , name= %s",v,name);
//     return 0;
// }



//     int mymull(int x,int y){
//         int z=x*y;
//         return z;
//     }
//     int myadd(int x,int y){
//         int z=x+y;
//         return z;
//     }    
// int main() {
//     int a=5,b=6;
//     printf("%d\n",myadd(a,b));
//     printf("%d\n",mymull(a,b));
//     return 0;
// }



// int main() {
//     int a=10;
//     printf("%d\n",++a);
//     {
//         int a = 20;
//         printf("%d\n",a);
//     }
//     printf("%d\n",a);
//     return 0;
// }



// int myprint() {
//     static int x=0;
//     int y=0;
//     x++;
//     y++;
//     printf("x=%d  y=%d\n",x,y);
//     return 0;
// }
// void  main(){
//     int i;
//     for(i=0;i<10;i++)
//       myprint();
// }



//static int x;
// void file_fun1(void);
    
// int  main(){
//     printf("main.c x=%d\n",x);
//     file_fun1();
//     printf("main.c x=%d\n",x);
//     x=8;
//     printf("main.c x=%d\n",x);
//     file_fun1();
// }

// //int x=1;
// void file_fun1(void){
//     printf("file_fun1 x=%d\n",x);
//     x+=3;
// }



// extern int x;
// int  main(){
//     x=1;
//     printf("x=%d\n",x);
//     return 0;
// }
// int x=1;



// int  main(){
//     register int x=1;  //varible is allocated memory in cpu register. the initial default
//     printf("x=%d\n",x);
//     return 0;
// }


// int  main(){
//     register int x=1;
//     scanf("x=%d\n",&x);
//     return 0;
// }



// void printhello(){
//     printf("hello\n");
// }

// int main() {
//     while(1)
//     printhello();

//     return 0;
// }



// void printhello(){
//     printf("hello\n");
//     printhello();
// }

// int main() {
//     printhello();
//     return 0;
// }



// void printhello(){
//     printf("hello\n");
// }

// int main() {
//     int i=0;
//     while((i++)<10)
//     printhello();

//     return 0;
// }




// void printhello(int downcounter){
//     printf("hello\n");
//     downcounter--;
//     if(downcounter>0)
//       printhello(downcounter);
// }

// int main() {
//     printhello(10);
//     return 0;
// }







// #include <stdio.h>
// void file1_func1(int x);
// inline int example (int x){
//     x+=3;
//     return x;
// }
// int main() {
//   int y=7;
//   y=example(y);
//   printf("%d",y);
//   return 0;
// }




// #include <stdio.h>
// void file1_func1(int x);
// __inline int example (int x){
//     x+=3;
//     return x;
// }
// int main() {
//   int y=7;
//   y=example(y);
//   printf("%d",y);
//   return 0;
// }

















































































































































