#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//5���� �ǽ� 4- ���� ���α׷�   

 
int main (void)
{
    int number, sum, i;
    sum=0;  //���ϱ� ����� �����ϴ� ���� , �ʱⰪ=0  
    
    printf("input a number : ");
    scanf("%i", &number); //������ �Է¹���  
    
    for(i=1; i<=number; i++) //1���� �Է� �������� ����  
    {
    	sum+=i; // 1���� �Է��������� ����  
    	
	}
    printf("the result is %i", sum); //������� ���  
	return 0;
  
   }
	
	 	
