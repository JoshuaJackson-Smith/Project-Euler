#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
	int max;
	int input;
	int count = 0;
	
	printf("Which prime number is needed: ");
	scanf("%d", &input);
//	max = 25*input; 		//can be used if not using math.h
	max=((input*log(input))+(input*log(log(input))));
//	int numArr[25*max];
	int *numArr = malloc(max*sizeof(int));
	if (numArr == NULL) {
		printf("Memory allocation failed!\n");
		return 1;
	}

	//###############// Get array of numbers from 1 to selected number
	for(int i = 0; i<=max; i++)
	{
		numArr[i] = i;
	}
	//###############//
	
	//###############// Eliminate numbers one by one using sieve method and replace non primes with 0
	int i=2;
	while(count<input)
	{
		for(int j = (2*i); j <= max ; j+=i)
		{
			numArr[j] = 0;
		}
		if (numArr[i] != 0){
			count++;
		}
		i++;
	}
	printf("Prime number #%d is %d\n", count, numArr[i-1]);
	free(numArr);
//	printf("Sum of primes under %d is: %ld\n", max, sum);
	return 0;
}