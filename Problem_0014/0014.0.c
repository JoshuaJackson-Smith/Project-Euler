//
//  main.c
//  Problem_0014
//
//  Created by Joshua Jackson-Smith on 2026/08/07.
//

#include <stdlib.h>
#include <stdio.h>



int main(void)
{
	unsigned int Collatz(unsigned int n);
	int choice;
	unsigned int startint;
	
	setbuf(stdout, 0);

	printf("Enter 1 to input custom number\nEnter 0 to get the longest string for numbers below 10000000\n");
	printf("Choice: ");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 0:
		{
			int maxstartint = 0; //declares the starting interger for the maximum length
			int maxlength = 0;
						
			for(startint=1; startint <= 1000000; startint++) 	//get the Collatz length for starting intergers from 1 to whatever
			{
				int length = Collatz(startint);					//declares variable Length as the int returned from Collatz function
				
				if(maxlength<length) //If the current length is greater than maxlength, overwrite maxlength
				{
					maxlength = length;
					maxstartint = startint;
				}
			}

			printf("Startint Interger: %d\n", maxstartint);
			break;
		}
		case 1:
			printf("Enter Starting Number: ");
			scanf("%u", &startint);			//allows user to determine startint value
			printf("\nLength: %d\n", Collatz(startint));
			break;
	}
	return(0);
}



unsigned int Collatz(unsigned int n)
{
	unsigned int count = 1;
	while(n!=1) //loop until start interger gets to one
	{
		switch(n%2)
		{
			case 0: //n is even
				n /= 2;
				count++;
				break;
			case 1: //n is odd
				n = (n*3 + 1)/2;
				count += 2;
				break;
		}
	}
	return count;//what do i put here?
}
