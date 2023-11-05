#include<stdio.h>
#include<stdlib.h>

int power(int base, int exp);

int main(void)
{
	int b, e;
	printf("Enter base and exponent:");
	scanf("%d %d", &b, &e);
	printf("%d to the power of %d is %d",b,e, power(b, e));
	system("pause");
	return 0;
}

int power(int base, int exp)
{
	int p=1,i;
	for (i = 1; i <= exp; i++)
		p = p * base;
	return p;
}