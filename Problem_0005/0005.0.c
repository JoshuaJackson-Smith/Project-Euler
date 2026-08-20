//
//  main.c
//  Problem_0005
//
//  Created by Joshua Jackson-Smith on 2026/08/03.
//

#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int input;
	printf("Smallest number that is evenly divisible by numbers 1 to ");
	scanf("%d", &input);
	int i = input-1;
	int k = 1;
	while(k<=input){
		i++;
		for(k=((input/2)+1); k<=input; k++){
			if(i%k != 0)
				break;
		}
	}
	printf("\nThe smallest number that is evenly divisible by numbers 1 to %d is: %d\n",input ,  i);
	return 0;
}
