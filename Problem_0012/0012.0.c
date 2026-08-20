//
//  0012.0.c
//  Problem_0012
//
//  Created by Joshua Jackson-Smith on 2026/08/04.
//	could be far faster

#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int input;
	int triNum = 0;
	int factorcount = 2;
	int maxfactors = 0;
	int count = 1;
	
	printf("Find the first triangle number with more factors than:");
	scanf("%d", &input);
	
	while(factorcount<=input){
		triNum += count++;
		factorcount = 2;
		if(triNum%2==0){
			for(int i=2; i<=(triNum/2); i++){
				if(triNum%i==0)
					factorcount++;
			}
		}else{
			for(int i=3; i<(triNum/2); i+=2){
				if(triNum%i==0)
					factorcount++;
			}
		}
		if(factorcount>maxfactors)
			maxfactors=factorcount;
	}
	
	printf("Triangle no.%d, %d, is the first triangle number with over %d factors, having %d factors.\n", count-1, triNum, input, factorcount);
	
	return 0;
}
