#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//7���� �ǽ�4 

int counter;

void set_counter()
{
	counter = 20;
}
int main(void)
{
	printf("counter = %d\n", counter);
	set_counter(); // counter = 20; ��� �����ϴ� �Լ�  
	printf("counter = %d\n", counter);
	return 0;
}
