#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//5���� �ǽ� 3-�Էµ� ���ڿ����� ������ ���� �� ��  

 
int main (void)
{
   char c,i;
   int num=0;
   printf("input a string :");

   while( (c = getchar() ) != '\n')   // ���ǽ� ���� �ѱ��ھ� �޴� �ڵ�  
     {

		  if(i= c>= '0' && c<='9' ) // �Էµ� c�� ASCII ���� �󿡼� ���� 0~9�� �ش��ϴ����� ��������� �� 
	      {   num++;
	      }                          //���ڿ� ���ڰ� ���Ե� ������ num�� �����ϴ� ��  
	 }

   printf(" the number of digits is %i.\n", num);

	return 0;
  
   }
	
	 	
