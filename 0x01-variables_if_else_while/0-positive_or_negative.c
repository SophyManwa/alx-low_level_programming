#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -entry point
 * Description: prints if a number is positive or negative.
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX/2;
	if (n > 0)
	{
		printf("%d is positive\n",n);
	}
	if (n == 0){
		printf("%d is zero\n", n);
	}
	else if (n < 0){
		printf("%d is positive\n", n);
	}
	return (0);
}

