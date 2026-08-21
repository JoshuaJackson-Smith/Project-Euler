//
//  0011.0.c
//  Problem_0011
//
//  Created by Joshua Jackson-Smith on 2026/08/04.
//

#include <stdlib.h>
#include <stdio.h>

int main(void) {
	FILE *numptr;
	numptr = fopen("/Problem_0011/array.txt", "r");
	
	int numArray[20][20];
	int number;
	
	for(int i=0; i<20; i++){
		for(int j=0; j<20; j++){
			fscanf(numptr, "%d", &number);
			numArray[i][j] = number;
		}
	}
	/*========================================*/
	int oldtotal = 0;
	int newtotal;
	
	for(int i=0; i<20; i++){
		for(int j=0; j<=16; j++){
			newtotal = numArray[i][j]*numArray[i][j+1]*numArray[i][j+2]*numArray[i][j+3];
			if(newtotal>oldtotal)
				oldtotal = newtotal;
		}
	}
	
	for(int i=0; i<=16; i++){
		for(int j=0; j<20; j++){
			newtotal = numArray[i][j]*numArray[i+1][j]*numArray[i+2][j]*numArray[i+3][j];
			if(newtotal>oldtotal)
				oldtotal = newtotal;
		}
	}
	
	for(int i=0; i<=16; i++){
		for(int j=0; j<=16; j++){
			newtotal = numArray[i][j]*numArray[i+1][j+1]*numArray[i+2][j+2]*numArray[i+3][j+3];
			if(newtotal>oldtotal)
				oldtotal = newtotal;
		}
	}
	
	for(int i=0; i<=16; i++){
		for(int j=0; j<=16; j++){
			newtotal = numArray[i+3][j]*numArray[i+2][j+1]*numArray[i+1][j+2]*numArray[i][j+3];
			if(newtotal>oldtotal)
				oldtotal = newtotal;
		}
	}
	printf("%d\n", oldtotal);
	return 0;
}
