#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int max;
	int count = 0;
	int count2 = 0;
	
	scanf("%d", &max);
	int *numArr = malloc(max*100*sizeof(int));
	if (numArr == NULL) {
		printf("Memory allocation failed!\n");
		return 1;
	}
	
	//###############// Get array of numbers from 1 to selected number
	for(int i = 0; i<max*100; i++)
	{
		numArr[i] = i;
	}
	//###############//
	
	//###############// Eliminate numbers one by one using sieve method and replace non primes with 0
	for(int i = 2; i<=max*100 && count<max; i++)
	{
		for(int j = (2*i); j <= max*100 ; j+=i)
		{
			numArr[j] = 0;
		}
		if (numArr[i] != 0)
			count++;
	}
	//###############//
	
	//###############// Create a new array containing only selected prime numbers
	int *primeArr = malloc(max*sizeof(int));
	if (primeArr == NULL) {
		printf("Memory allocation failed!\n");
		return 1;
	}
	
	for(int i = 2; count2<max; i++)
	{
		if(numArr[i] != 0)
			primeArr[count2++] = numArr[i];
	}
	//###############// Count up primes till the selected prime is found
	
	for(int i = 0; i<=count-1; i++)
	{
		printf("%d: %d\n", i+1,  primeArr[i]);
	}
	free(numArr);
	free(primeArr);
	return 0;
}
