#include <stdio.h>
#include <string.h>

typedef
    struct data
    {
        int id;
        char name[50];
        char department[50];
        char course[50];
        int year;

    } data;
int main(){
    
    data students[450];
    int num, pYear, rollNo;
    printf("Enter The Number of Students: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter Id of Student %d: ", i+1);
        scanf("%d", &students[i].id);
        printf("Enter Name of Student %d: ", i+1);
        scanf("%s", &students[i].name);
        printf("Enter Department of Student %d: ", i+1);
        scanf("%s", &students[i].department);
        printf("Enter Course of Student %d: ", i+1);
        scanf("%s", &students[i].course);
        printf("Enter Year of Student %d: ", i+1);
        scanf("%d", &students[i].year);
    }
    printf("Enter Year To Print: ");
    scanf("%d", &pYear);
    printf("Students studying in the year %d are: ", pYear);
    for (int i = 0; i < num; i++)
    {
        if (students[i].year == pYear)
        {
            printf("%s, ", students[i].name);
        }
    }
    printf("Enter Roll No Of A Student: ");
    scanf("%d", &rollNo);
    for (int i = 0; i < num; i++)
    {
        if (students[i].id == rollNo)
        {
            printf("Roll No: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year: %d", students[i].year);
            break;
        }
    }  
}