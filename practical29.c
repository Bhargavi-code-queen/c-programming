#include <stdio.h>
#include <stdlib.h>

int create_and_write_file() {
    FILE *file;
    char text[256];

    // Get user input for the initial text
    printf("Enter the text to write to the file: ");
    fgets(text, sizeof(text), stdin);

    // Open the file in write mode ("w"), creates the file if it doesn't exist
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;  // Return 1 to indicate an error
    }

    // Write user input to the file
    fputs(text, file);

    // Close the file after writing
    fclose(file);

    // Open the file in read mode ("r") to display the contents
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;  // Return 1 to indicate an error
    }

    printf("\nFile contents after initial write:\n");
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch); // Display the file contents
    }

    // Close the file after reading
    fclose(file);

    return 0;  // Return 0 to indicate success
}

int append_to_file() {
    FILE *file;
    char text[256];

    // Get additional text from the user
    printf("\nEnter the text to append to the file: ");
    fgets(text, sizeof(text), stdin);

    // Open the file in append mode ("a")
    file = fopen("example.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;  // Return 1 to indicate an error
    }

    // Append the new text to the file
    fputs(text, file);

    // Close the file after appending
    fclose(file);

    // Open the file in read mode ("r") to display the updated contents
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;  // Return 1 to indicate an error
    }

    printf("\nFile contents after appending:\n");
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch); // Display the updated file contents
    }

    // Close the file after reading
    fclose(file);

    return 0;  // Return 0 to indicate success
}

int main() {
    // Call create_and_write_file and check for errors
    if (create_and_write_file() != 0) {
        return 1;  // Exit the program if there was an error
    }

    // Call append_to_file and check for errors
    if (append_to_file() != 0) {
        return 1;  // Exit the program if there was an error
    }

    return 0;  // Exit the program successfully
}
