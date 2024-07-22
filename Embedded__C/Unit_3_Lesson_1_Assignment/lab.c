#include <stdio.h>

#define RCC_BASE      0X40021000
#define GPIOA_BASE    0X40010800
#define RCC_APB2ENR   *(volatile uint32_t *)(RCC_BASE  + 0X18)
#define GPIOA_CRH     *(volatile uint32_t *)(GPIOA_BASE+ 0X04)
#define GPIOA_ODR     *(volatile uint32_t *)(GPIOA_BASE+ 0X0C)

#define RCC_IOPAEN  (1<<2)
#define GPIOA13     (1UL<<13)

typedef union {
    vuint32_t   all_fields;
    struct{
    vuint32_t  reserved:13;
    vuint32_t  p_13:1;
    }pin;
}R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile uint32_t *)(GPIOA_BASE+ 0X0C); 

int main(){
    RCC_APB2ENR |=RCC_IOPAEN;
    GPIOA_CRH  &=0XFF0FFFFFF;
    GPIOA_CRH  |=0X002000000;
    while(1){
    R_ODR->pin.p_13 =1;  
    for(int i=0;i<5000;i++);
    R_ODR->pin.p_13 =0;
    for(int i=0;i<5000;i++);
    }
    
}
