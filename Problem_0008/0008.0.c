//
//  00080.0.c
//  Problem_0008
//
//  Created by Joshua Jackson-Smith on 2026/08/03.
//

#include <stdlib.h>
#include <stdio.h>

int main(void) {
	FILE *numptr;
	numptr = fopen("/Problem_0008/numbers.txt", "r");
	
	char characters[1001];
	int numbers[1000];
	
	fgets(characters, 1001, numptr);
	for(int i=0; i<1000; i++){
		numbers[i] = characters[i]-'0';
	}
	/**************************************************/
	int input;
	printf("Length of series: ");
	scanf("%d", &input);
	long oldtotal = 1;
	long newtotal = 1;
	
	for(int k=0; k<=(999-input); k++){
		for(int i=0; i<input; i++){
			newtotal *= numbers[k+i];
		}
		if(newtotal>oldtotal){
			oldtotal = newtotal;
//			for(int i=0; i<input; i++){
//				printf("%d", numbers[k+i]);
//			}
//			printf("\n");
		}
		newtotal = 1;
	}
	printf("\nHighest product of %d adjacent intergers: %ld\n",input, oldtotal);
/*
	for(int i=0; i<=(999-input); i++){
		if(newtotal==0)
			newtotal = 1;
		newtotal /= numbers[i];
		newtotal *= numbers[i+input];
		printf("%d. %d = %d*%d*%d*%d\n", i, newtotal, numbers[i+1], numbers[i+2], numbers[i+3], numbers[i+4]);
		if(newtotal>oldtotal)
			oldtotal = newtotal;
	}
 */
	return 0;
}
