#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//5���� ����-continue   

 
int main (void)
{
   int i;
   
   for(i=0; i<10; i++)
   {
   	if (i%3 == 0)
   	continue; //���ǹ��� �����ϸ� ���������� �������� �ʰ� ���� 
   	printf("%i", i); 
   }
	
	 	
}
