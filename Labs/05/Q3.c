#include <stdio.h>

int main() {
	char delete;
	printf("Are you sure to delete [Y/y] / [N/n]: "); 
	scanf(" %c", &delete);
	switch(delete) {
		case ('Y'):
			printf("Deleted Successfully");
			break;
		case ('y'):
			printf("Deleted Successfully");
			break;
		case ('N'):
			printf("Delete Cancelled");
			break;
		case ('n'):
			printf("Delete Cancelled");
			break;
		default:
			printf("Please choose [Y/y] / [N/n]");
	}
	return 0;
}