/**
 * Programmer: Muhammed Owais 
 * Desc: Ramanujan-Hardy Numbers
 * Date: 27/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int main()
{
	int n, sum;
	printf("Enter a number n: ");
	scanf("%d", &n);
	n = n * n * n;
	for (int i = 1; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			for (int a = i; a < n; ++a)
			{
				for (int b = a; b < n; ++b)
				{
					sum = (a*a*a) + (b*b*b);
					if ((((i*i*i)+(j*j*j)) == (sum)) && (sum < n) && (i != j) && (a != b) 
						&& (i != a) && (i != b) && (j != a) && (j != b)){
						printf("%d ", sum);
					}
				}
			}
		}
	}
}