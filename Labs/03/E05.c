#include <stdio.h>

int main() {
	int north = 0;
	int south = 0;
	int west = 0;
	int east = 0;
	int total = 0;
	int fuel = 0;
	printf("How many kilometres were travelled north: ");
	scanf("%d", &north);	
	printf("How many kilometres were travelled south: ");
	scanf("%d", &south);
	printf("How many kilometres were travelled west: ");
	scanf("%d", &west);
	printf("How many kilometres were travelled east: ");
	scanf("%d", &east);
	total = north + south + west + east;
	fuel = total / 2;
	printf("Total Kilometres Travelled: %d\n", total);
	printf("Total Fuel Consumed: %d\n", fuel);
	return 1;
}