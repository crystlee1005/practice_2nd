#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//7���� �ǽ�3

int inc(int counter)
{
	counter++;
	return counter;
}
int main(void)

{
  int i;
	 i=10;

	
	printf("�Լ� ȣ�� �� i=%d\n", i);
	 inc(i);
	printf("�Լ� ȣ�� �� i=%d\n", inc(i) );
	
	return 0; 
}
