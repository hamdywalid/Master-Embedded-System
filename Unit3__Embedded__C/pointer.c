

// #include "stdio.h"
// #include "a.h"
// #include "b.h"


// int main(){
// 	S_C r;
// 	af (r);
// 	bf (r);
// }

// void af(S_C q){
// 	printf("af");
// }

// void bf(S_C p){
// 	printf("bf");
// }



#include "stdio.h"
#include "a.h"
#include "b.h"

#ifndef   A_H_
#define   A_H_
#ifndef   T_H_
#define   T_H_

typedef struct {
	int x;
}S_C;
#endif

void af(S_C q);
#endif

#ifndef   B_H_
#define   B_H_
#ifndef   T_H_
#define   T_H_

typedef struct {
	int x;
}S_C;
#endif

void bf(S_C q);
#endif
