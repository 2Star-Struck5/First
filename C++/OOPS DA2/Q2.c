#include <stdio.h>
#include <string.h>

typedef struct {
    int empid;
    char empname[50];
    float salary;
} Employee;



void accept_employee_details(int i, Employee *employee) {
    printf("Enter employee %d ID: ", i);
    scanf("%d", &employee->empid);

    printf("Enter employee name: ");
    scanf(" %[^\n]s", employee->empname);

    printf("Enter employee salary: ");
    scanf("%f", &employee->salary);
}

void search_by_empid(Employee employees[], int n, int empid) {
    for (int i = 0; i < n; i++) {
        if (employees[i].empid == empid) {
            printf("Employee found:\n");
            printf("Employee ID: %d, Name: %s, Salary: Rs. %.2f\n", employees[i].empid, employees[i].empname, employees[i].salary);
            return;
        }
    }
    printf("Employee not found.\n");
}

void display_all(Employee employees[], int n) {
    printf("All employees:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee ID: %d, Name: %s, Salary: Rs. %.2f\n", employees[i].empid, employees[i].empname, employees[i].salary);
    }
}

void display_names_with_salary_gt_10000(Employee employees[], int n) {
    printf("Employees with salary > 10000:\n");
    for (int i = 0; i < n; i++) {
        if (employees[i].salary > 10000) {
            printf("Employee ID: %d, Name: %s, Salary: Rs. %.2f\n", employees[i].empid, employees[i].empname, employees[i].salary);
        }
    }
}

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    Employee employees[n];
    for (int i = 0; i < n; i++) {
        accept_employee_details(i+1, &employees[i]);
    }

    int choice;
    int search_id;

    do {
        printf("\nMenu:\n");
        printf("1. Search by Employee ID\n");
        printf("2. Display All Employees\n");
        printf("3. Display Names of Employees with Salary > 10000\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Employee ID to search: ");
                scanf("%d", &search_id);
                search_by_empid(employees, n, search_id);
                break;
            case 2:
                display_all(employees, n);
                break;
            case 3:
                display_names_with_salary_gt_10000(employees, n);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);


    return 0;
}