#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 3주차 실습2
  // 한자리 숫자를 char 형태로 받아서 숫자형태로 출 
    

int main()
{
  char c;
  int i; 
  printf("input a number : ");
  scanf("%c", &c );
  
  i = c - '0';
  printf("The input number is : %i ", i);
 
  
  
  return 0; 
  

  
    
 } 
 
