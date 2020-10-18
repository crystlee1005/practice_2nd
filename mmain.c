#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//4주차 실습6, 시분초를  계산  
 
int main(int argc, char *argv[]) {
	
	int second;
	
	printf("input the second : ");
	scanf("%i", &second);
	

    printf("the time is %i : %i : %i \n", (second/3600), (second%3600/60), (second%60));
  

	return 0;
}
