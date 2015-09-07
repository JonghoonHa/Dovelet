#include <stdio.h>

typedef enum{false, true} bool;

bool isLeapYear(int year){

	if(year%4 == 0){
	
		if(year%100 != 0)
			return true;
		else if(year%400 == 0)
			return true;
	}
	return false;
}

int dayCount(int num){

	int i, year, month, date, dateLimit, days[7] = {0, }, firstday = 2;
	bool leap = false;

	for(year=0; year<num; year++){

		leap = isLeapYear(year+1900);

		for(month=0; month<12; month++){

			if(month == 1 && leap)
				dateLimit = 29;
			else if(month == 1)
				dateLimit = 28;
			else if(month == 0 || month == 2 || month == 4 || month == 6 || month == 7 || month == 9 || month == 11)
				dateLimit = 31;
			else
				dateLimit = 30;

			for(date=firstday; date<dateLimit + firstday; date++){
				if(date == firstday+12)
					days[date%7]++;
			}
			firstday = date;
		}
	}

	for(i=0; i<7; i++)
		printf("%d ", days[i%7]);

	printf("\n");

	return 0;
}

int main(void){

	int num;

	scanf("%d", &num);

	dayCount(num);

	return 0;
}