//
//  0010.0.c
//  Problem_0010 - V1
//
//  Created by Joshua Jackson-Smith on 2026/08/04.
//

#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int input;
	long sum = 5;
	scanf("%d", &input);
	
	for(int i=3, k=3; i<=input; i+=2)
	{
		for(k=3; k<=((i+1)/2); k++)
		{
			if(i%k == 0)
				break;
		}
		if(i%k != 0)
			sum+=i;
	}
	printf("%ld\n", sum);
	return 0;
}
