#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//5주차 실습 3-입력된 문자열에서 숫자의 개수 세 기  

 
int main (void)
{
   char c,i;
   int num=0;
   printf("input a string :");

   while( (c = getchar() ) != '\n')   // 조건식 내에 한글자씩 받는 코드  
     {

		  if(i= c>= '0' && c<='9' ) // 입력된 c가 ASCII 문자 상에서 숫자 0~9에 해당하는지를 관계식으로 비교 
	      {   num++;
	      }                          //문자에 숫자가 포함될 때마다 num을 증감하는 식  
	 }

   printf(" the number of digits is %i.\n", num);

	return 0;
  
   }
	
	 	
