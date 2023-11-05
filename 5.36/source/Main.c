#include <stdio.h>

void towersOfHanoi(int n, char source, char auxiliary, char destination)
{
	if (n == 1)
	{
		printf("Move disk 1 from peg %c to peg %c\n", source, destination);
		return;
	}
	towersOfHanoi(n - 1, source, destination, auxiliary);
	printf("Move disk %d from peg %c to peg %c\n", n, source, destination);
	towersOfHanoi(n - 1, auxiliary, source, destination);
}

int main() 
{
	int numDisks = 64; 
	towersOfHanoi(numDisks, 'A', 'B', 'C');
	return 0;
}