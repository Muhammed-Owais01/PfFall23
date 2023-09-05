#include <stdio.h>

int main() {
	int len = 0;
	int width = 0;
	int depth = 0;
	int vol = 0;
	printf("Enter length: ");
	scanf("%d", &len);
	printf("Enter width: ");
	scanf("%d", &width);
	printf("Enter depth: ");
	scanf("%d", &depth);
	vol = len * width * depth;
	printf("The volume of the container is %d", vol);
}