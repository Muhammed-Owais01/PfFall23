#include <stdio.h>

int main (){
	int oprice = 0;
	printf("All the items have a discount of 15%!\n");
	printf("Please enter the price of the item: ");
	scanf("%d", &oprice);
	oprice = oprice * 0.8;
	printf("Your discounted price is %d", oprice);
	return 1;
}