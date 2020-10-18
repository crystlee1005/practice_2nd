#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//5주차 실습 6- 숫자맞추기 게임      

 
int main (void)
{

	int num, ans, trial;
	ans=999;
	trial=0;
	
	
     do{

     printf("guess a number: ");
      scanf("%i", &num);

	 if(num<ans)
	 printf("high!\n"); // 입력된 숫자가 정답보다 작으면  

	 else if(num> ans)
	 printf("low!\n"); // 입력된 숫자가 정답보다 크면 

	 trial++; // 반복될  때마다 시도 횟수를 더한다. 


	} while (num !=ans); // 입력된 숫자가 정답이 아닐 경우 do를 반복  
	
	printf(" congratulations!  the number of trial: %i", trial ); // 정답이면 시도횟수와 함께 출력  
	
	return 0;
     
   }
	
	 	
