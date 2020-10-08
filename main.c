#include <stdio.h>
#include <stdlib.h>


int combination(int n, int r)
{
	int a, b, c;
	
	a = factorial(n);
	b = factorial(n-r);
	c = factorial(r); 
	
	return(a/b/c);
}

int factorial(int n)
{
	int res=1;
	int i;
	
	for(i=1; i<=n; i++)
	{
		 res=res*i;
	}
	 
	return res;
}

int get_integer()
{
	int x;
	printf("input two integers :");
	scanf("%i", &x);
	
	return x;
}


int main(int argc, char *argv[])
{
	int n, r, result;
	
	n=get_integer();
	r=get_integer();
	
	result = combination(n,r);
	
	printf("combination result is : %i\n", result);
	
	return 0;    
}

