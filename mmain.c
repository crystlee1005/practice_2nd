#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//7주차 실습4 

int counter;

void set_counter()
{
	counter = 20;
}
int main(void)
{
	printf("counter = %d\n", counter);
	set_counter(); // counter = 20; 라고 정의하는 함수  
	printf("counter = %d\n", counter);
	return 0;
}
