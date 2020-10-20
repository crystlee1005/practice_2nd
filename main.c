#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 4주차 실습2   
  // 사칙 연산 계산기  
    

int main()
{
  int a, b;
  print("input two integers : ");
  scanf("%i %i", &a, &b);
  
  printf("+ result is %i \n", (a+b));
  printf("- result is %i \n", (a-b));
  printf("* result is %i \n", (a*b));
  printf("/ result is %i \n", (a/b));
  printf("%% result is %i \n", (a%b));
  
  
  return 0; 
  

  
    
 } 
 
