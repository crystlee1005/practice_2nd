#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//5주차 실습 2-절대값 구하기  

 
int main (void)
{
   int i;
   printf(" 정수 하나를 입력하시오: ");
   scanf("%i", &i);
    
   if(i>0)
   printf("절대값은 %i 입니다.", i);
   
   else if (i<0)
   printf("절대값은 %i 입니다.", -i);
   
   else 
   printf("절대값은 0입니다."); 
   }
	
	 	
