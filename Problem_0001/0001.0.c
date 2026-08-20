//
//  main.c
//  Problem_1
//
//  Created by Joshua Jackson-Smith on 2026/07/30.
//

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int total=0;
	for(int i=1; i< 1000; i++){
		if(i%3 == 0 || i%5 == 0)
			total += i;
	}
	printf("%d\n", total);
	return 0;
}
