#include <stdio.h>
#include <string.h>

// Structure definition for Employee
struct Employee 
{
    int emp_id;
    char name[100];
    char department[50];
    float salary;
};

int main() 
{
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for (int i = 0; i < n; i++) 
	{
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].emp_id);
        getchar();  // Clear newline after integer input

        printf("Enter Name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = '\0';

        printf("Enter Department: ");
        fgets(emp[i].department, sizeof(emp[i].department), stdin);
        emp[i].department[strcspn(emp[i].department, "\n")] = '\0';

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display employee records
    printf("\n--- Employee Records ---\n");
    for (int i = 0; i < n; i++) 
	{
        printf("Employee ID: %d\n", emp[i].emp_id);
        printf("Name: %s\n", emp[i].name);
        printf("Department: %s\n", emp[i].department);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("-----------------------\n");
    }
    return 0;
}

