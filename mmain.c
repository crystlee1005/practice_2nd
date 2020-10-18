#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//5주차 예제-continue   

 
int main (void)
{
   int i;
   
   for(i=0; i<10; i++)
   {
   	if (i%3 == 0)
   	continue; //조건문이 성립하면 다음문장을 실행하지 않고 증감 
   	printf("%i", i); 
   }
	
	 	
}
