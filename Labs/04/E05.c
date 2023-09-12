/*
 * Name: Muhammed Owais
 * Date: 9/11/2023
 * Description: This prints the quadratic solutions.
 * Related Files:
 */

//--Include Files--//
#include <stdio.h>

int main() {
	int year1,year2,month1,month2,day1,day2;
	printf("Enter dates of the first person\n");
	do {
		printf("Enter year: ");
		scanf("%d", &year1);
	}
	while (year1 < 0);
	do {
		printf("Enter month: ");
		scanf("%d", &month1);
	}
	while (month1 < 0 || month1 > 12);
	do {
		printf("Enter day: ");
		scanf("%d", &day1);
	}
	while (day1 < 0 || day1 >31);
	printf("Enter dates of the second person\n");
	do {
		printf("Enter year: ");
		scanf("%d", &year2);
	}
	while (year2 < 0);
	do {
		printf("Enter month: ");
		scanf("%d", &month2);
	}
	while (month2 < 0 || month2 > 12);
	do {
		printf("Enter day: ");
		scanf("%d", &day2);
	}
	while (day2 < 0 || day2 > 31);
	if (year1 > year2) {
		printf("Person 2 is older");
	} else if (year1 < year2) {
		printf("Person 1 is older");
	} else {
		if (month1 > month2) {
			printf("Person 2 is older");
		} else if (month1 < month2) {
			printf("Person 1 is older");
		} else {
			if (day1 > day2) {
			printf("Person 2 is older");
			} else if (day1 < day2) {
				printf("Person 1 is older");
			} else {
				printf("Same Age");
			}
	}
	}	
	return 1;
} // end main
