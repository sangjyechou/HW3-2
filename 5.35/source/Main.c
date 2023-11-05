#include<stdio.h>
#include<stdlib.h>

int fib(unsigned long long int a);

int main(void)
{
	unsigned int n;
	printf("Enter n:");
	scanf("%d", &n);
	printf("fibonacci(%d)is %d\n", n, fib(n));
	system("pause");
	return 0;
}

int fib(unsigned int a)
{
	int i,j = 1,k=0,l;
	for (i = 1; i < a-1; i++)
	{
		l = j + k;
		k = j;
		j = l;
	}
	return l;
}