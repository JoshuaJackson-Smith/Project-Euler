//
//  main.c
//  Problem_0019
//
//  Created by Joshua Jackson-Smith on 2026/08/13.
//

#include <stdlib.h>
#include <stdio.h>

int isLeapYear(int year);
int daysInMonth(int m);

int main(void) {
	int Calendar[6][36890];//0=day  1=day of year  2=day of week  3=day of the month  4=month of year  5=year
	int count = 0;
	
	
	for(int y=1900, i=0; y<=2000 && i<36890; y++){
		for(int d=1; d<=(365+isLeapYear(y)) && i<36890; d++, i++){
			Calendar[5][i]=y;
			Calendar[1][i]=d;
			Calendar[0][i]=i+1;
			Calendar[2][i]=(i%7)+1;
		}
	}
	
	
	for(int m=1, i=0; i<36890; m++){
		if(m==13)
			m=1;
		
		for(int d=1; d<=daysInMonth(m) &&  i<36890; d++, i++){
			Calendar[4][i]=m;
			Calendar[3][i]=d;
			if(m==2 && isLeapYear(Calendar[5][i]) && d==28){
				Calendar[4][i+1]=m;
				Calendar[3][i+1]=29;
				i++;
			}
		}
	}

	for(int i=0; i<36890; i++){
		if(Calendar[1][i]<100)
			printf("%d.\t\t", Calendar[1][i]);
		else
			printf("%d.\t", Calendar[1][i]);
		
		switch(Calendar[2][i]){
			case 1:
				printf("Monday\t\t");
				break;
			case 2:
				printf("Tuesday\t\t");
				break;
			case 3:
				printf("Wednesday\t");
				break;
			case 4:
				printf("Thursday\t");
				break;
			case 5:
				printf("Friday\t\t");
				break;
			case 6:
				printf("Saturday\t");
				break;
			case 7:
				printf("Sunday\t\t");
				break;
		}
		printf("%d\t-\t%d\t- %d\n", Calendar[3][i], Calendar[4][i], Calendar[5][i]);
	}

	for(int i=365; i<36890; i++){
		if(Calendar[2][i]==7 && Calendar[3][i] == 1)
			count++;
	}

	printf("%d\n", count);
	
	return 0;
}

int isLeapYear(int year){
	int isLeap = 0;
	if(year%4 == 0 && (year%100 != 0 || year%400 == 0)){
		isLeap = 1;
	}
	return isLeap;
}

int daysInMonth(int m){
	int daycount;
	
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		daycount = 31;
	else if(m==2)
		daycount = 28;
	else
		daycount = 30;
	
	return daycount;
}
