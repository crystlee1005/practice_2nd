#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//5���� ����- ��ȯ�� do while ��  
 //�޴����� ���α׷�  
 
int main (void)
{
    int i=0; //�ʱⰪ �� ��  
    
    do
    {
    	printf("1-���θ����\n");
    	printf("2-���� ���� \n");
    	printf("3-���� �ݱ� \n");
		printf("�ϳ��� �����ϼ���. \n");
		scanf("%i", &i);
		
	} while(i<1 || i>3);
	
	 	
}
