#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//5주차 실습 4- 덧셈 프로그램   

 
int main (void)
{
    int number, sum, i;
    sum=0;  //더하기 결과를 저장하는 변수 , 초기값=0  
    
    printf("input a number : ");
    scanf("%i", &number); //정수를 입력받음  
    
    for(i=1; i<=number; i++) //1부터 입력 정수까지 증가  
    {
    	sum+=i; // 1부터 입력정수까지 더함  
    	
	}
    printf("the result is %i", sum); //결과값을 출력  
	return 0;
  
   }
	
	 	
