#include<stdio.h>
#include<stdlib.h>

int shift(int a);

int main(void)
{
	char b;
	while (1)
	{
		printf("Enter a letter(0 to end):");
		scanf(" %c", &b);
		if (b != 32)
			if(b>=65 && b<=90)
				printf("Lower case letter is %c\n", shift(b));
			else if(b>=97 && b<=122)
				printf("The capital letter is %c\n", shift(b));
		else 
			break;
	}
	system("pause");
	return 0;
}

int shift(int a)
{
	char c;
	if (a >= 65 && a <= 90)
		c = a + 32;
	else if (a >= 97 && a <= 122)
		c = a - 32;
	return c;
}