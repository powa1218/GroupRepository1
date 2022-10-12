#include "test1.h"

int factorial(int n)
{
	int value = 1;
	if(n == 0)
	{
		return value;
	}
	else
	{
		for(int i = 1; i <= n; i++)
		{
			value *= i;
		}
		return value;
	}
}

int exponent(int a, int b)
{
	int value = 1;
	if(b == 0)
	{
		return value;
	}
	else
	{
		for(int i = 1; i <= b; i++)
		{
			value *= a;
		}
		return value;
	}
}