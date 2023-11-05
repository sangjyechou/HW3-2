#include<stdio.h>
#include<stdlib.h>

int Multiple(int a);
int main(void)
{
	int n1, n2;
	printf("Enter two number:");
	scanf("%d %d", &n1, &n2);
	printf("Least common multiple is %d\n", n1*n2/Multiple(n1,n2));
	system("pause");
	return 0;
}
int Multiple(int a ,int b)
{
	int m;
	while (b != 0)
	{
		m = a % b;
		a = b;
		b = m;
	}
	return a;
}
