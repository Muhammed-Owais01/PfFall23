#include <stdio.h>

typedef struct course
{
    int courseCode;
    char courseName[15];
    int courseGpa;
    int semester[8];
    int creditHours;
} course;


int main(){
    int n, cSum = 0;
    printf("Enter the number of courses: ");
    scanf("%d", &n);

    FILE *ptr = fopen("courses.txt", "w");
    course *arr = (course *)malloc(n * sizeof(course));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("Enter Course %d ID: ", i+1);
            scanf("%d", arr[i].courseCode);
            fputs(arr[i].courseCode, ptr);
            printf("Enter Course Name: ");
            scanf("%s", arr[i].courseName);
            fputs(arr[i].courseName, ptr);
            printf("Enter Course GPA: ");
            scanf("%d", arr[i].courseGpa);
            fputs(arr[i].courseGpa, ptr);
            printf("Enter Semester: ");
            scanf("%d", arr[i].semester);
            fputs(arr[i].semester, ptr);
            printf("Enter Credit Hours: ");
            scanf("%d", arr[i].creditHours);
            fputs(arr[i].creditHours, ptr);
            fprintf(ptr, "\n");
        }
        
        
    }
    int a;
    printf("Enter:\n1- View Transcript\n2- Calculate CGPA\n3- Calculate SGPAS\nEnter: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        for (int i = 0; i < n; i++)
        {
            printf("Transcript of Student %d:\n", i+1);
            printf("Course Id: %d", arr[i].courseCode);
            printf("Course Name: %s", arr[i].courseName);
            printf("Course GPA: %d: ", arr[i].courseGpa);
            printf("Semester: %d", arr[i].semester);
            printf("Credit Hours: %d\n", arr[i].creditHours);
        }
        break;
    case 2:
        for (int i = 0; i < n; i++)
        {
            cSum += arr[i].courseGpa;
        }
        
    default:
        break;
    }
    
}