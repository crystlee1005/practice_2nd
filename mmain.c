#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//5주차 실습 5- 산술계산기     

 
int main (void)
{
    int a, b; // 두 정수 변수 
    char c;  
    printf(" 식을 입력하세요: ");
    scanf(" %i %c %i", &a, &c, &b); //숫자, 연산자, 숫자 입력  
	
	if(c== '+') //입력된 문자가 덧셈일때  
	printf("= %i \n", a+b ); 
	
    else if(c=='-') // 입력된 문자가 뺄셈일때  
	printf("= %i \n", a-b );
	
	else if(c=='*') // 입력된 문자가 곱셈일 때  
	printf("= %i \n", a*b);
	
	else if(c=='/') //입력된 문자가 나눗셈일 때  
	printf("= %i \n", a/b); 
	
	else if(c=='%') //입력된 문자가 나머지일 때  
	printf("= %i \n", a%b);
	
return 0; 
  
   }
	
	 	
