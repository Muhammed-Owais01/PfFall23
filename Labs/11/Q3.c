/**
 * Programmer: Muhammed Owais 
 * Desc: Dates Equal or Not
 * Date: 21/11/2023
 * Roll-No: 23K-0047
 */ 

#include <stdio.h>

typedef struct date
{
    int day;
    char month[10];
    int year;
} date;


int main(){
    date date1;
    date date2;
    printf("Enter Date 1 as Day Month Year: ");
    scanf("%d %s %d", &date1.day, &date1.month, &date1.year);
    printf("Enter Date 2 as Day Month Year: ");
    scanf("%d %s %d", &date2.day, &date2.month, &date2.year);
    if (date1.day == date2.day && strcmp(date1.month, date2.month) == 0 && date1.year == date2.year)
    {
        printf("Dates are equal");
    }
    else
    {
        printf("Dates are not equal");
    }
    
    
}