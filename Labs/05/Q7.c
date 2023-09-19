#include <stdio.h>

int main() {
	int cost;
	int sum = 0;
	int saved = 0;
	printf("Enter the cost of your items: ");
	scanf("%d", &cost);
	if (cost >= 2000 && cost <=4000) {
		sum = cost * 0.8;
		saved = cost * 0.2;
	} else if (cost >= 4001 && cost <= 6000) {
		sum = cost * 0.7;
		saved = cost * 0.3;
	} else if (cost > 6000) {
		sum = cost * 0.5;
		saved = cost * 0.5;
	}
	printf("Actual Amount: %d\n", cost);
	printf("Saved Amount: %d\n", saved);
	printf("New Amount: %d", sum);
	return 1; 
}