#include stdio.h



// int main() {
//     float x=1.2;
//     int y=5;
//     int z=0x878925;
//     int  a;
//     char b;
//     a=x;
//     printf("%d\n",a);
//     b=y;
//     printf("%d\n",b);
//     b=z;
//     printf("%d\n",b); //0x25= (DEC==37)
//     return 0;
// }




// int main() {
//     float x=1.2;
//     int y=5;
//     int z=0x878925;
//     int  a;
//     char b;
//     a=(int)x;
//     printf("%d\n",a);
//     b=(char)y;
//     printf("%d\n",b);
//     b=(char)z;
//     printf("%d\n",b); //0x25= hex(37)
//     return 0;
// }




//   int main() {
//     int degree[10];
//     int x=524;
//     int y;
//     degree[4]=x;
//     y=x;
//     printf("%d \n",degree[4]);
//     printf("%d \n",y);
//     return 0;
//  }




//////////////// Lab1
//   int main() {
//     int degree[10];
//     int i;
//     for(i=0;i<10;i++){
//     printf("enter the number %d :",i+1);
//     scanf("%d",&degree[i]);
//     }
//     for(i=0;i<10;i++){
//     printf("enter the number %d: %d \n",i+1,degree[i]);
//     }
//     return 0;
//  }




//////////////// Lab2
//   int main() {
//     int x[5]={5 , 16, 22 , 3, 15};
//     int i;
//     int y;
//     for(i=0;i<5;i++){
//       y=5*x[i]*x[i] + 3*x[i] + 2;
//     printf("%d \n",y);    
//     }
    
//     return 0;
//  }




// int main() {
//     int degree[3][2]={{45,63},{78,21},{4,6}};
//     int x=13;
//     int y;
//     degree[2][1]=x;
//     degree[1][0]=y;
//     printf("%d\n",x);
//     scanf("%d\n",&degree[1][0]);
//     printf("%d\n",y);
//     return 0;
// }



//////////////////// Lab3
// int main() {
//     int a[3][3];
//     int t[3][3];
//     int i,j;
//     printf("Enter the matrix\n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter item  (%d,%d):",i,j);
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("a:\n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",a[i][j]);
//         }
//          printf(" \n");
//     }
//     printf("t:\n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             t[i][j]=a[j][i];
//             printf("%d ",t[i][j]);
//         }
//          printf(" \n");
//     }
//     return 0;
// }





int main() {
	
	
//     int i;
//     char x[7];
//     x[0]='h';
//     x[1]='e';
//     x[2]= 0 ;
//     x[3]='l';
//     x[4]='l';
//     x[5]= 0 ;
//     printf("%s \n",x);
//     printf("%s \n",&x[0]);
//     printf("%s \n",&x[1]);
//     printf("%s \n",&x[3]);
// for(i=0;i<sizeof(x) &&x[i] !=0 ;i++){
//     printf("%c",x[i]);
// }



// char text[100]={'h','e','l','l','o',0};
// printf("%s\r\n",text);
	
	

// char text[100]={'h','e','l','l','o',0};
//  printf("%s\r\n",text);
//  printf("%d\n",text);
//  printf("%d\n",&text[0]);
//  printf("%d\n",&text[1]);
//  printf("%d\n",&text[99]);	



// char text[100]={'h','e','l','l','o',0};
//  printf("%d\n",text);
//  printf("%d\n",text[0]);
//  printf("%d\n",text[1]);
//  printf("%d\n",text[2]);
//  printf("%d\n",text[3]);
//  printf("%d\n",text[60]);
//  printf("%d\n",text[99]);



// char text[100]={'h','e','l','l','o'};
//  printf("%s\n",text);
 


// char test[100];
// printf("Enter your first name\r\n");
// fflush(stdin);fflush(stdout);
// scanf("%s",test);
// printf("your name is %s \r\n",test);



// char test[100];
// printf("Enter your first name\r\n");
// fflush(stdin);fflush(stdout);
// gets(test);
// printf("your name is: %s \r\n",test);



// char name[5][20]={"hamdy walid",
//                   "ahmed walid",
//                   "ali mohamed",
//                   "abdallah yasser",
//                   "walid shalaby"};
//  printf("%s\t\n",&name[0][0]);                 
//  printf("%s\t\n",name[0]);
//  printf("%s\t\n",name[1]);
//  printf("%s\t\n",name[2]);
//  printf("%s\t\n",name[3]);
//  printf("%s\t\n",name[4]);
 
//  printf("\t\n");
//  printf("%c\t\n",name[0][0]);
//  printf("%c\t\n",name[1][7]);
//printf("%c\t\n",name[4][9]);


// char name[5][20]={"hamdy walid",
//                   "ahmed walid",
//                   "ali mohamed",
//                   "abdallah yasser",
//                   "walid shalaby"};
// for(int i=0;i<5;i++){                 
// printf("%s\t\n",name[i]);                 
// }



// char a[20]="adham walid";
// char b[20];
// int    i=0;
// while(a[i] !=0){
//     b[i]=a[i];
//     i++;
// } 
//   b[i]=0;
// printf("b: %s\r\n",b);



// char a[20]="khaled adham";
// char b[20];
// strcpy(b,a);
// printf("%s\r\n",b);



// char a[20]="alaa";
// char b[20]="ezzat";
// strcat(a," ");
// strcat(a,b);
// printf("%s\r\n",a);



// char a[20]="aLAA";
// char b[20]="ezZAt";
// strlwr(a);
// strupr(b);
// printf("%s %s\r\n",a,b);



//  char name[]="hamdy walid";
//  printf("Name: %s,Length: %d",name,strlen(name));



// char names[5][14]={"Alaa","Osama","Mamdouh","samy","Hossain"};
// char name[14];
// int  i;

// printf("ENter your name:");
// scanf("%s",name);

// for(i=0;i<5;i++){
//     if(strcmp(name, names[i])==0){
//         printf("congratulation, your name id in thr list");
//         break;
//     }
// }   
//     if(i==5)
//     printf("we are sorry, name is not listed");
//     return 0;


// char text [20]="1025";
// int x=200;
// int y;
// y=x+text;
// printf("%d\n",text);
// printf("%d",y);



// char text[20];
// int x,y,z;
// printf("Enter x: ");
// gets(text);
// x=atoi(text);
// printf("Enter y: ");
// gets(text);
// y=atoi(text);
// z= x + y;
// printf("x + y = %d",z);



// int x[1000];
// int i;
// for(i=0;i<1000;i++)
// x[i]=rand();
}