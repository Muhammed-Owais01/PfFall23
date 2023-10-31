/**
 * Programmer: Muhammed Owais 
 * Desc: Total Score, Average, Highest Score, Centuries and Half Centuries of Batters in Innings
 * Date: 27/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

void batsmenStats(int batsmen, int innings, int arr[batsmen][innings]);
int main()
{
	int batsmen, innings;
	printf("Enter The Number of Batsmen: ");
	scanf("%d", &batsmen);
	printf("Enter The Number of Innings: ");
	scanf("%d", &innings);
	int arr[batsmen][innings];
	for (int i = 0; i < batsmen; ++i)
	{
		for (int j = 0; j < innings; ++j)
		{
			printf("Enter Batsman %ds Inning %d: ", i+1,j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	batsmenStats(batsmen, innings, arr);
	return 1;
}

void batsmenStats(int batsmen, int innings, int arr[batsmen][innings])
{
	int avg;
	int hInning;
	
		printf("           Total Score | Average | Highest Score  | Centuries | Half Centuries\n");
	for (int i = 0; i < batsmen; ++i)
	{
		int sum = 0;
		int centuries = 0;
		int half_centuries = 0;
		int highest = arr[i][0];
		for (int j = 0; j < innings; ++j)
		{
			sum = sum + arr[i][j];
			if (arr[i][j] > highest){
				highest = arr[i][j];
				hInning = j;
			}
			if (arr[i][j] >= 100){
				centuries++;
			}
			else if (arr[i][j] >= 50){
				half_centuries++;
			}
		}
		avg = sum / (innings+1);
		printf("Batsman %d: %d         |%d       |%d in Inning %d |%d          |%d\n", i+1, sum, avg, highest, hInning+1, centuries, half_centuries);
	}
}