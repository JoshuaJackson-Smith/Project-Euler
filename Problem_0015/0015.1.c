//
//  0015.1.c
//  0015.1
//
//  Created by Joshua Jackson-Smith on 2026/08/07.
//

//	1. Create array of 1, 1
//	j=0, j0 = 1
//	2. Create new temp array of size i, with array2[j+1]=array1[k-1]+array1[k]

#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int input;
	printf("How many paths can you take going right and down on a NxN grid with N = ");
	scanf("%d", &input);
	long long paths = 1;
	
	for(int i=1; i<=input; i++){
		paths*=(input+i);
		paths/=i;
	}
	
	printf("%lld\n", paths);
	
	return 0;
}
