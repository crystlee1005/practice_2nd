#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//4���� �ǽ�3, ���ʸ� ���  
 
int main(int argc, char *argv[]) {
	
	int year, result;
	
	printf("input the year : ");
	scanf("%i", &year);
	
	result = ((year%4 == 0)&&(year%100 != 0))||(year%400 == 0);
  printf("is the year %i leap year? %i \n", year, result);
  

	return 0;
}
