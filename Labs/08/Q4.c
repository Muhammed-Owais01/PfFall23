/**
 * Programmer: Muhammed Owais 
 * Desc: Checks if password is more than 8 characters and is Secure123
 * Date: 10/24/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int main()
{
    char pass[80];
    do
    {
        printf("Enter Password(Must be 8 Characters or more): ");
        gets(pass);
    }
    while(strlen(pass) <= 8);
    if (strcmp(pass, "Secure123") == 0)
    {
        printf("Login successful. Welcome!");
    }
    else
    {
        printf("Login failed. Incorrect password.");
    }
    return 1;
}