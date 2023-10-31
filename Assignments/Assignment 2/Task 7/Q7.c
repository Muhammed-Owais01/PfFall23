/**
 * Programmer: Muhammed Owais 
 * Desc: Shirts Price and Age Sorting
 * Date: 28/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>
#include <stdbool.h>

void printArray(int arr[][2]);
void sortAge(int arr[][2], bool flag);
void sortPrice(int shirts[][2], bool flag);
int main(){
	bool flag = true;
	int temp;
	int shirts[10][2] = {{25, 105},
						{12, 56},
						{8, 90},
						{45, 80},
						{32, 78},
						{24, 15},
						{56, 78},
						{45, 32},
						{1, 67},
						{5, 34}	};
	sortAge(shirts,flag);
	printf("Ascending Order In Age: \n");
	printArray(shirts);
	sortPrice(shirts, flag);
	printf("Descending Order In Price: \n");
	printArray(shirts);
}

void printArray(int arr[][2])
{
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ,%d\n", arr[i][0], arr[i][1]);
	}
}

void sortAge(int shirts[][2], bool flag){
	int temp;
	while (flag == true){
		flag = false;
		for (int i = 0; i < 9; ++i)
		{
			if(shirts[i][0] > shirts[i+1][0])
			{
				temp = shirts[i+1][0];
				shirts[i+1][0] = shirts[i][0];
				shirts[i][0] = temp;
				temp = shirts[i+1][1];
				shirts[i+1][1] = shirts[i][1];
				shirts[i][1] = temp;
				flag = true;
			}
		}
	}
}

void sortPrice(int shirts[][2], bool flag){
	int temp;
	flag = true;
	while (flag == true){
		flag = false;
		for (int i = 0; i < 9; ++i)
		{
			if(shirts[i][1] < shirts[i+1][1])
			{
				temp = shirts[i+1][0];
				shirts[i+1][0] = shirts[i][0];
				shirts[i][0] = temp;
				temp = shirts[i+1][1];
				shirts[i+1][1] = shirts[i][1];
				shirts[i][1] = temp;
				flag = true;
			}
		}
	}
}