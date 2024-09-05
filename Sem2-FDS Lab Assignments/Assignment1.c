/* 
PROBLEM STATEMENT : Assignment based on structure for creating database and perform operation as insert a record, delete a Record, Modify the record and display the updated database
*/

#include <stdio.h>
#include <string.h>

struct Employee {
    int EmployeeID;
    char FirstName[50];
    char LastName[50];
    char Department[50];
    int Salary;
};

void insertRecord(struct Employee *employees, int *numEmployees);
void modifyRecord(struct Employee *employees, int numEmployees);
void deleteRecord(struct Employee *employees, int *numEmployees);
void displayRecords(struct Employee *employees, int numEmployees);

int main() {
    struct Employee employees[10];  
    int numEmployees = 0;
    int choice;

    do {
        printf("\n1. Insert Record\n");
        printf("2. Modify Record\n");
        printf("3. Delete Record\n");
        printf("4. Display Records\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertRecord(employees, &numEmployees);
                break;
            case 2:
                modifyRecord(employees, numEmployees);
                break;
            case 3:
                deleteRecord(employees, &numEmployees);
                break;
            case 4:
                displayRecords(employees, numEmployees);
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}

// Function to insert a record
void insertRecord(struct Employee *employees, int *numEmployees) {
    printf("Enter Employee ID: ");
    scanf("%d", &employees[*numEmployees].EmployeeID);

    printf("Enter First Name: ");
    scanf("%s", employees[*numEmployees].FirstName);

    printf("Enter Last Name: ");
    scanf("%s", employees[*numEmployees].LastName);

    printf("Enter Department: ");
    scanf("%s", employees[*numEmployees].Department);

    printf("Enter Salary: ");
    scanf("%d", &employees[*numEmployees].Salary);

    (*numEmployees)++;
    printf("Record inserted successfully.\n");
}

// Function to modify a record
void modifyRecord(struct Employee *employees, int numEmployees) {
    int employeeID;
    int index = -1;

    printf("Enter Employee ID to modify: ");
    scanf("%d", &employeeID);

    for (int i = 0; i < numEmployees; i++) {
        if (employees[i].EmployeeID == employeeID) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Enter new Salary: ");
        scanf("%d", &employees[index].Salary);
        printf("Record modified successfully.\n");
    } else {
        printf("Employee not found.\n");
    }
}

// Function to delete a record
void deleteRecord(struct Employee *employees, int *numEmployees) {
    int employeeID;
    int index = -1;

    printf("Enter Employee ID to delete: ");
    scanf("%d", &employeeID);

    for (int i = 0; i < *numEmployees; i++) {
        if (employees[i].EmployeeID == employeeID) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        // Shift remaining elements to fill the gap
        for (int i = index; i < (*numEmployees - 1); i++) {
            employees[i] = employees[i + 1];
        }

        (*numEmployees)--;
        printf("Record deleted successfully.\n");
    } else {
        printf("Employee not found.\n");
    }
}

void displayRecords(struct Employee *employees, int numEmployees) {
    if (numEmployees > 0) {
        printf("Employee Records:\n");
        for (int i = 0; i < numEmployees; i++) {
            printf("EmployeeID: %d, Name: %s %s, Department: %s, Salary: %d\n",
                   employees[i].EmployeeID, employees[i].FirstName, employees[i].LastName,
                   employees[i].Department, employees[i].Salary);
        }
    } else {
        printf("No records available.\n");
    }
}