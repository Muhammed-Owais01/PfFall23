/**
 * Programmer: Muhammed Owais 
 * Desc: Less than 10 gives english else odd even
 * Date: 10/03/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int main() {
	int a,b;
	do {
		printf("First number must be greater than second number\n");
		printf("Input the first number: ");
		scanf("%d", &a);
		printf("Input the second number: ");
		scanf("%d", &b);
	}
	while (a > b);
	while (a <= b) {
		switch (a){
			case 1: 
				printf("One ");
				break;
			case 2:
				printf("Two ");
				break;
			case 3: 
				printf("Three ");
				break;
			case 4:
				printf("Four ");
				break;
			case 5: 
				printf("Five ");
				break;
			case 6:
				printf("Six ");
				break;
			case 7: 
				printf("Seven ");
				break;
			case 8:
				printf("Eight ");
				break;
			case 9:
				printf("Nine ");
				break;
		}
		if (a > 9) {
			if (a % 2 == 0) {
				printf("Even ");
			} else {
				printf("Odd ");
			}
		}
		a++;
				
	}
	return 1;
}