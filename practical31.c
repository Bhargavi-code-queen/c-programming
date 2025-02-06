#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

int updateSalary(FILE *file, int id, float newSalary) {
    Employee emp;
    fseek(file, 0, SEEK_SET);  // Move to the start of the file

    while (fread(&emp, sizeof(Employee), 1, file)) {
        if (emp.id == id) {
            // Update the salary for the employee with the given ID
            emp.salary = newSalary;
            // Move the file pointer back to the position of the record to update it
            fseek(file, -sizeof(Employee), SEEK_CUR);
            fwrite(&emp, sizeof(Employee), 1, file);  // Write the modified record
            printf("Salary updated for Employee ID: %d\n", id);
            return 1; // Return 1 to indicate success
        }
    }

    printf("Employee with ID %d not found!\n", id);
    return 0; // Return 0 to indicate failure
}

int displayEmployees(FILE *file) {
    Employee emp;
    rewind(file);  // Move to the start of the file

    while (fread(&emp, sizeof(Employee), 1, file)) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", emp.id, emp.name, emp.salary);
    }

    return 1; // Return 1 to indicate success
}

int main() {
    FILE *file = fopen("employees.dat", "r+b");  // Open the file for reading and writing in binary mode

    if (file == NULL) {
        printf("File could not be opened\n");
        return 1;
    }

    // Display the initial records
    printf("Initial Records:\n");
    displayEmployees(file);

    // Update the salary of an employee with ID 2
    if (updateSalary(file, 2, 50000.0f) == 1) {
        // Display the records after the update
        printf("\nRecords after salary update:\n");
        displayEmployees(file);
    }

    fclose(file);
    return 0;
}
