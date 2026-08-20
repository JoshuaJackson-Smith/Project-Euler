//
//  main.c
//  Problem_0006
//
//  Created by Joshua Jackson-Smith on 2026/07/31.
//  implement sum formula, n(n+1)/2

#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int sumOfSquares = 0;
	int squareOfSums = 0;
	int limit;
	
	printf("Input limit: ");
	scanf("%d", &limit);
	
	for(int i=1; i<=limit; i++){
		sumOfSquares+=(i*i);
	}
	
	for(int i=1; i<=limit; i++){
		squareOfSums += i;
		if(i==limit)
			squareOfSums*=squareOfSums;
	}
	
	printf("%d\n", squareOfSums-sumOfSquares);
	return 0;
}
