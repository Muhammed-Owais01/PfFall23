/**
 * Programmer: Muhammed Owais 
 * Desc: Division of two numbers without the division operator
 * Date: 10/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int main()
{
    int num1,num2;
    char op;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter an Operator: ");
    scanf(" %c", &op);
    printf("Enter Number 2: ");
    scanf("%d", &num2);
    calc(num1,num2,op);
}

void calc(int num1, int num2, char op)
{
    if (op == '+')
    {
        printf("%d", num1+num2);
    }
    else if (op == '-')
    {
        printf("%d", num1-num2);
    }
    else if (op == '*')
    {
        printf("%d", num1*num2);
    }
    else if (op == '/')
    {
        
    }
    
}