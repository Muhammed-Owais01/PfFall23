/**
 * Programmer: Muhammed Owais 
 * Desc: Returns 1 if day and carnumber are both even or both odd else returns 0
 * Date: 10/24/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int decideCarUsage(int n, int day);
int main()
{
    int n,day;
    printf("Enter Your Car Number: ");
    scanf("%d", &n);
    printf("Enter Day: ");
    scanf("%d", &day);
    while (day < 1 && day > 7)
    {
        printf("Please Enter Days in the range 1 to 7: ");
        scanf("%d", &day);    
    }
    int ans = decideCarUsage(n, day);
    printf("%d", ans);
}

int decideCarUsage(int n, int day)
{
    if (n % 2 == 0)
    {
        if (day % 2 == 0)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
    else if (n % 2 != 0)
    {
        if (day % 2 != 0)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
    return -1;
}