/**
 * Programmer: Muhammed Owais 
 * Desc: The Persistence Number
 * Date: 28/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
	bool flag = true;
	int n, total = 1;
	char arr[5];
	while(strcmp(arr, "EOF") != 0)
	{
		printf("Enter A Number Whoose Persistence You Want: ");
		scanf("%d", &n);
		printf("Persistence Of %d ", n);
		while(n > 9){
			while(n > 0){
				total *= n % 10;
				n /= 10;
			}
			n = total;
			total = 1;
		}
		printf("is %d\n", n);
		printf("Enter EOF To End: ");
		getchar();
		gets(arr);
	}
}