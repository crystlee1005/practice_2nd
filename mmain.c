#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//5���� �ǽ� 6- ���ڸ��߱� ����      

 
int main (void)
{

	int num, ans, trial;
	ans=999;
	trial=0;
	
	
     do{

     printf("guess a number: ");
      scanf("%i", &num);

	 if(num<ans)
	 printf("high!\n"); // �Էµ� ���ڰ� ���亸�� ������  

	 else if(num> ans)
	 printf("low!\n"); // �Էµ� ���ڰ� ���亸�� ũ�� 

	 trial++; // �ݺ���  ������ �õ� Ƚ���� ���Ѵ�. 


	} while (num !=ans); // �Էµ� ���ڰ� ������ �ƴ� ��� do�� �ݺ�  
	
	printf(" congratulations!  the number of trial: %i", trial ); // �����̸� �õ�Ƚ���� �Բ� ���  
	
	return 0;
     
   }
	
	 	
