#include <stdio.h>
#include <math.h>

int main() {
	int a,b,c,disc;
	float root1,root2;
	printf("Enter the value of x square: ");
	scanf("%d", &a);
	printf("Enter the value of x: ");
	scanf("%d", &b);
	printf("Enter the value of constant: ");
	scanf("%d", &c);	
	disc = (b*b) - (4*a*c);
	if (disc < 0) {
		printf("Complex Roots Thus Not Possible");
	} else if (disc = 0) {
		root1 = (-b+sqrt(disc))/2;
		printf("Single Root: %.3f", root1);
	} else {
		root1 = (-b+sqrt(disc))/2;
		root2 = (-b-sqrt(disc))/2;
		printf("Two Roots: %.3f and %.3f", root1, root2);
	}
	return 1;
}