#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50

// Define a structure to represent student records
struct Student {
    int id;
    char name[MAX_NAME_LENGTH];
    char grade;
};

// Function to create a binary file and write student records to it
int create_and_write_binary_file(const char *filename) {
    FILE *file;
    struct Student students[] = {
        {1, "Alice", 'A'},
        {2, "Bob", 'B'},
        {3, "Charlie", 'C'}
    };
    size_t num_students = sizeof(students) / sizeof(students[0]);

    // Open the file in write binary mode ("wb")
    file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;  // Return 1 to indicate an error
    }

    // Write the array of students to the binary file
    fwrite(students, sizeof(struct Student), num_students, file);

    // Close the file after writing
    fclose(file);

    return 0;  // Return 0 to indicate success
}

// Function to read and display student records from the binary file
int read_and_display_binary_file(const char *filename) {
    FILE *file;
    struct Student student;
    
    // Open the file in read binary mode ("rb")
    file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;  // Return 1 to indicate an error
    }

    printf("\nStudent Records:\n");

    // Read and display each student record
    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("ID: %d, Name: %s, Grade: %c\n", student.id, student.name, student.grade);
    }

    // Close the file after reading
    fclose(file);

    return 0;  // Return 0 to indicate success
}

// Function to append a new student record to the binary file
int append_to_binary_file(const char *filename) {
    FILE *file;
    struct Student new_student = {4, "David", 'B'};

    // Open the file in append binary mode ("ab")
    file = fopen(filename, "ab");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;  // Return 1 to indicate an error
    }

    // Append the new student record to the file
    fwrite(&new_student, sizeof(struct Student), 1, file);

    // Close the file after appending
    fclose(file);

    return 0;  // Return 0 to indicate success
}

int main() {
    const char *filename = "students.dat";

    // Create and write initial records to the binary file
    if (create_and_write_binary_file(filename) != 0) {
        return 1;  // Exit with an error code if file creation or writing fails
    }

    // Read and display the current student records
    if (read_and_display_binary_file(filename) != 0) {
        return 1;  // Exit with an error code if reading fails
    }

    // Append a new student record
    if (append_to_binary_file(filename) != 0) {
        return 1;  // Exit with an error code if appending fails
    }

    // Read and display the updated student records
    if (read_and_display_binary_file(filename) != 0) {
        return 1;  // Exit with an error code if reading fails
    }

    return 0;  // Exit successfully
}


