#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//4주차 실습3
 
int main(int argc, char *argv[]) {
	
	int m, s;
	
	printf("input the second : ");
	scanf("%i", &s);
	
	m = s/60;
    s = s%60;
  printf("The time is %i : %i \n", m, s);
  

	return 0;
}
