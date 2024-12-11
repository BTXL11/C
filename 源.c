#include<stdio.h>
#include<math.h>
#include"≤‚ ‘.h"
int main()
{
	printf("fib(10)=%d\n", fib(10));
	return 0;
}
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
int F(int n)
{
	int a = 1;
	if (n == 1 || n == 2)
		return 1;
	else if(n>2)
	{
		int a = 1, b = 1, c;
		for (int i = 3; i <= n; i++)
		{
			c = a + b;
			a = b;
			b = c;

		}
		return c;
	}

}


   


