#include <stdio.h>

int main() {
	int time;
	printf("Enter Time: ");
	scanf("%d", &time);
	if (time >= 5 && time <= 11) {
		printf("Good Morning");
	} 
	else if (time >= 12 && time <= 18) {
		printf("Good Evening");
	} else if (time >= 18 && time <= 24) {
		printf("Good Night");
	} else if (time >=1 && time <=4) {
		printf("Late Night");
	} else {
		printf("Incorrect Time!");
	}
	return 1;
}