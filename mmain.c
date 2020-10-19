#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//6주차 예제- 반환값       
int square(int n);

int main(void)
{
	int result;
	result = square(5);
	printf("%d", result);
	
}

int square(int n) 
{
	return(n*n); //호출된 함수를 호출된 위치로 반환  
}

	 	
