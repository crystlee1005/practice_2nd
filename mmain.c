#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//5���� �ǽ� 5- �������     

 
int main (void)
{
    int a, b; // �� ���� ���� 
    char c;  
    printf(" ���� �Է��ϼ���: ");
    scanf(" %i %c %i", &a, &c, &b); //����, ������, ���� �Է�  
	
	if(c== '+') //�Էµ� ���ڰ� �����϶�  
	printf("= %i \n", a+b ); 
	
    else if(c=='-') // �Էµ� ���ڰ� �����϶�  
	printf("= %i \n", a-b );
	
	else if(c=='*') // �Էµ� ���ڰ� ������ ��  
	printf("= %i \n", a*b);
	
	else if(c=='/') //�Էµ� ���ڰ� �������� ��  
	printf("= %i \n", a/b); 
	
	else if(c=='%') //�Էµ� ���ڰ� �������� ��  
	printf("= %i \n", a%b);
	
return 0; 
  
   }
	
	 	
