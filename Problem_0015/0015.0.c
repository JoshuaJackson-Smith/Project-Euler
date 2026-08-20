//
//  0015.0.c
//  Problem_0015
//
//  Created by Joshua Jackson-Smith on 2026/08/07.
//
//	(2i)! / (i!)^2
//	2*input choose input
// Works, but loses presicion. Highest presicion with type double.
// 0015.1 should use type long long for path size, but should keep it small throughout the process

#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int input;
	printf("How many paths can you take going right and down on a NxN grid with N = ");
	scanf("%d", &input);
	double paths = 1;
	
	for(int i=2*input, k=input; i>input; i--, k--){
		paths*=i;
		paths/=k;
	}
	
	printf("%f\n", paths);
	return 0;
}
