/**
 * Programmer: Muhammed Owais 
 * Desc: Numbers pairs equal to t
 * Date: 27/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int main(){
	int n, t, sum;
	printf("Enter A Number N: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter A Target Number: ");
	scanf("%d", &t);
	for (int i = 0; i < n; ++i)
	{
		printf("Enter Number %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			sum = arr[i] + arr[j];
			if (sum == t){
				printf("(%d, %d) ", arr[i], arr[j]);
			}
		}
	}
}