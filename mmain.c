#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//5주차 예제- 순환문 do while 문  
 //메뉴선택 프로그램  
 
int main (void)
{
    int i=0; //초기값 설 정  
    
    do
    {
    	printf("1-새로만들기\n");
    	printf("2-파일 열기 \n");
    	printf("3-파일 닫기 \n");
		printf("하나를 선택하세요. \n");
		scanf("%i", &i);
		
	} while(i<1 || i>3);
	
	 	
}
