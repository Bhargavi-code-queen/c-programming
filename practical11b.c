#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    char line[256];
    
    // Ask the user for the filename
    printf("Enter the filename: ");
    scanf("%s", filename);
    
    // Open the file for writing
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    
    printf("Enter text (Press Enter on a blank line to stop):\n");
    getchar(); // Consume newline left by scanf
    
    while (1) {
        fgets(line, sizeof(line), stdin);
        
        // Check if the user entered a blank line
        if (line[0] == '\n') {
            break;
        }
        
        // Write the line to the file
        fputs(line, file);
    }
    
    // Close the file
    fclose(file);
    printf("Data successfully written to %s\n", filename);
    
    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }
    
    printf("\nContents of the file:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    
    // Close the file
    fclose(file);
    
    return 0;
}
