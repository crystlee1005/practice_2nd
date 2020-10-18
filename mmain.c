#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//5주차 실습 1-양수 음수 판단   

 
int main (void)
{
   int i;
   printf(" 정수 하나를 입력하시오: ");
   scanf("%i", &i);
    
   if(i>0)
   printf("양수입니다.");
   
   else if (i<0)
   printf("음수입니다.");
   
   else 
   printf("0입니다."); 
   }
	
	 	
