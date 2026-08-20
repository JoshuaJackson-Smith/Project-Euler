//
//  main.c
//  Problem_0003
//
//  Created by Joshua Jackson-Smith on 2026/07/31.
//
// This works, but is slow. last code works, and is fast, but reqires tons of memory.
//	Code 1: Fast, highly memory inneficient, lots of code - written by me
//	Code 2:	Slow, Memory efficient, simple small code - written by kayden

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {
	long input;
	scanf("%ld", &input);
	long start = input;
	
//	clock_t clockStart = clock();
	
	for(long i=(start/2); i>1 ; i--){
		if(start%i == 0)
			start = i;
	}
	
/*	clock_t clockEnd = clock();
	clock_t totalTicks = clockEnd-clockStart;
	double totalTime = (double)totalTicks/CLOCKS_PER_SEC;
	printf("Time taken: %f\n", totalTime);
*/
	printf("\nLargest Prime Factor of %ld: %ld\n", input, start);
	return 0;
}
