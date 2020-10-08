#include <stdio.h>

int sumTwo(int a, int b)
{
	return (a+b);
}

int square(int n)
{
	return (n*n);
}

int get_max(int x, int y)
{
	if(x > y)
	   return(x);
	else
	   return(y);
}

int main(void)
{

	printf("sumTwo : %i\n", sumTwo(1,2));
	printf("square : %i\n", square(5));
	printf("get_max : %i\n", get_max(10,30));
	
	return 0;
}

