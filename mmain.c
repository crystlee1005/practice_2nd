#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//6주차 실습4 - combination 

int get_integer()
{

int x;
    printf("input an integer: ");
    scanf("%i", &x);
    return x; 
}

int factorial(int n)
{ 	int res, i;
	res=1;
	for( i=1; i<=n; i++)
    res= res*i;

	return res;

}

int combination(int n, int r)
{
    int n1, n2, n3;
    int result;
    n1 = factorial(n);
    n2 = factorial(n-r);
    n3 = factorial(r);
    
    result = n1/(n2 * n3);
    
    return(n1/n2/n3/result);
}
int main (void)
{
	int n, r, result;

	n= get_integer();

	r= get_integer();

	result= combination(n,r);

	printf("C(%i, %i) = %i \n", n, r, result);

	return 0;
}    
