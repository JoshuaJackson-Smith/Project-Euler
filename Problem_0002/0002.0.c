//
//  main.c
//  Problem_0002
//
//  Created by Joshua Jackson-Smith on 2026/07/30.
//

#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int a=0, b=1;
	int total=0;

	for(int i=1; b<4000000 ; i++){
		int c=a+b;
		if(c%2 == 0)
			total += c;
		printf("%d, ", c);
		a=b;
		b=c;
		
	}
	printf("\n%d\n", total);
	return 0;
}
