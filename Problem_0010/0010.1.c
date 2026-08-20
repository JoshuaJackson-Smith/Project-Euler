//
//  0010.1.c
//  Problem_0010 - V2
//
//  Created by Joshua Jackson-Smith on 2026/08/04.
//	Reused prime sieve code

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int max;
	int count = 0;
	long sum = 0;
	
	printf("Sum the primes under the number: ");
	scanf("%d", &max);
	int numArr[max+1];
	
	//###############// Get array of numbers from 1 to selected number
	for(int i = 0; i<=max; i++)
	{
		numArr[i] = i;
	}
	//###############//
	
	//###############// Eliminate numbers one by one using sieve method and replace non primes with 0
	for(int i = 2; i<=max; i++)
	{
		for(int j = (2*i); j <= max ; j+=i)
		{
			numArr[j] = 0;
		}
		if (numArr[i] != 0){
			count++;
			sum+=numArr[i];
		}
	}
	printf("Sum of primes under %d is: %ld\n", max, sum);
	return 0;
}

