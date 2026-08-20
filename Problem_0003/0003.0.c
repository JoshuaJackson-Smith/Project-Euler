//
//  main.c
//  Problem_0003
//
//  Created by Joshua Jackson-Smith on 2026/07/31.
//
// Divide number by n-1, n-2 ect, until you get a number, then do it again until you get largest prime

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {
	long long max;
	scanf("%lld", &max);
	long long highestPrime = 0;
//	long long inputArr[max+1];
	long long *inputArr = calloc(max, sizeof(long long));

	if (inputArr == NULL) {
		printf("Memory allocation failed! Exiting...\n");
		return 1;
	}
	long long primeCount = 0;
	
	clock_t clockStart = clock();
	for(long long i=0; i<=(max+1); i++){ //create an array of numbers 0 to input
		inputArr[i] = i;
	}
	clock_t clockEnd = clock();
	clock_t totalTicks = clockEnd-clockStart;
	double totalTime = (double)totalTicks/CLOCKS_PER_SEC;
	printf("Time to create initial Array: %f\n", totalTime);
	
	clockStart = clock();
	for(long long i=2; i<=max ; i++){
		for(long long k=(2*i); k<=max; k+=i){
			inputArr[k] = 0;
		}
		if (inputArr[i] != 0)
			primeCount++;
	}
	clockEnd = clock();
	totalTicks = clockEnd-clockStart;
	totalTime = (double)totalTicks/CLOCKS_PER_SEC;
	printf("Time to remove non primes from initial Array: %f\n", totalTime);
	
	long long primeArr[primeCount];
	printf("%lld", primeCount);
	clockStart = clock();
	for(long long k=0; k<=primeCount; ){
		for(long long i=2; i<=max && k<=primeCount; i++){
			if(inputArr[i]>1){
				primeArr[k]=inputArr[i];
				k++;
				//if(k==primeCount) break;
				//printf("Prime n0.: %lld, i = %lld\n", k, i);
			}
		}
	}
	clockEnd = clock();
	totalTicks = clockEnd-clockStart;
	totalTime = (double)totalTicks/CLOCKS_PER_SEC;
	printf("Time to create prime Array: %f\n", totalTime);
	//===================//
	
	clockStart = clock();
	for(long long i=primeCount; highestPrime==0; i--)
	{
		long long currentPrime = primeArr[i-1];
		
		if(max%currentPrime==0){
			highestPrime = currentPrime;
			printf("Highest Prime Factor is: %lld\n", highestPrime);
		}
	}
	clockEnd = clock();
	totalTicks = clockEnd-clockStart;
	totalTime = (double)totalTicks/CLOCKS_PER_SEC;
	printf("Time to find highest prime factor: %f\n", totalTime);

	free(inputArr);
	inputArr = NULL;
	return 0;
}
