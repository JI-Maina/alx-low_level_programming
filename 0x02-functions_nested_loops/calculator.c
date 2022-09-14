#include <stdio.h>
int sum(int a, int b);

int main(void)
{
	int a = 2, b = 2;
	
	int add = sum(a,b);
	printf("sum: %d\n", add);
}

int sum(int a, int b)
{
	int sum = a + b;
	return sum;
}
