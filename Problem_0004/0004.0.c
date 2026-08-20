//
//  main.c
//  Problem_0004
//
//  Created by Joshua Jackson-Smith on 2026/07/31.
// 997799
//	10000 < x < 9980001

#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int numArr[900][900];

	for(int i=0; i<=899; i++){
		for(int j=0; j<=899; j++){
			numArr[i][j]=(j+100)*(i+100);
		}
	}
	int number;
	for(int i=0; i<=899; i++){
		for(int j=0; j<=899; j++){
			number = numArr[i][j];
			
		}
	}
//	printf("%d\n", (146768%10));
	return 0;
}
