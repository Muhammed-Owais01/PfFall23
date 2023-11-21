/**
 * Programmer: Muhammed Owais 
 * Desc: Employee Data 
 * Date: 21/11/2023
 * Roll-No: 23K-0047
 */ 

#include <stdio.h>

typedef struct data
{
    char name[20];
    int salary;
    int hours;
} data;


int main(){
    data employees[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter Name, Salary, Hours of Employee %d: ", i+1);
        scanf("%s %d %d", &employees[i].name, &employees[i].salary, &employees[i].hours);
    }
    for (int i = 0; i < 10; i++)
    {
        if (employees[i].hours >=12)
        {
            employees[i].salary += 150;
        }
        else if (employees[i].hours == 10)
        {
            employees[i].salary += 100;
        }
        else if (employees[i].hours == 8)
        {
            employees[i].salary += 50;
        }
        printf("Employee %d: \n", i+1);
        printf("Name: %s, Salary: %d, Hours: %d\n", employees[i].name, employees[i].salary, employees[i].hours);
    }
    
}