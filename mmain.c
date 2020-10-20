#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//7주차 실습3

int inc(int counter)
{
	counter++;
	return counter;
}
int main(void)

{
  int i;
	 i=10;

	
	printf("함수 호출 전 i=%d\n", i);
	 inc(i);
	printf("함수 호출 후 i=%d\n", inc(i) );
	
	return 0; 
}
