#include <stdio.h>
#include <math.h>

int main(){
	int base = 0;
	int perp = 0;
	float hyp = 0;
	printf("Enter Side 1 for triangle: ");
	scanf("%d", &base);
	printf("Enter Side 2 for triangle: ");
	scanf("%d", &perp);
	base = base * base;
	perp = perp * perp;
	hyp = sqrt(base + perp);
	printf("The hypotneus is: %f", hyp);
	return 1;
}
