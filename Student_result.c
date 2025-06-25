#include <stdio.h>
#include <string.h>

struct Student 
{
    char name[50];
    char id[20];
    char grade;
    float cgpa;
};

int main() 
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student information
    for (int i = 0; i < n; i++) 
    {
        printf("Student %d:\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Enter ID: ");
        scanf("%s", students[i].id);
        printf("Enter Grade (A-F): ");
        scanf(" %c", &students[i].grade);
        printf("Enter CGPA (0.0-4.0): ");
        scanf("%f", &students[i].cgpa);
    }

    // Display all student info
    printf("\n=== Student Information ===\n");
    printf("Name\tID\tGrade\tCGPA\n");

    for (int i = 0; i < n; i++) 
    {
        printf("%s\t%s\t%c\t%.2f\n", students[i].name, students[i].id, students[i].grade, students[i].cgpa);
    }

    // Search loop
    char searchID[20];
    while (1) {
        printf("\nEnter ID to search (or 'exit'): ");
        scanf("%s", searchID);

        if (strcmp(searchID, "exit") == 0) 
        {
            break;
        }

        int found = 0;
        for (int i = 0; i < n; i++) 
        {
            if (strcmp(searchID, students[i].id) == 0) {
                printf("Found: %s, ID: %s, Grade: %c, CGPA: %.2f\n",
                       students[i].name, students[i].id, students[i].grade, students[i].cgpa);
                found = 1;
                break;
            }
        }

        if (!found) 
        {
            printf("Student with ID %s not found.\n", searchID);
        }
    }

    return 0;
}
