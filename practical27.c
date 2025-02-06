#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

// Structure to store contact details
struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[MAX_CONTACTS];
    int count = 0, choice;
    char searchName[50];

    while (1) {
        printf("\nContact List Manager\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline

        if (choice == 1) {
            if (count < MAX_CONTACTS) {
                printf("Enter name: ");
                fgets(contacts[count].name, 50, stdin);
                contacts[count].name[strcspn(contacts[count].name, "\n")] = 0;

                printf("Enter phone number: ");
                fgets(contacts[count].phone, 15, stdin);
                contacts[count].phone[strcspn(contacts[count].phone, "\n")] = 0;

                count++;
                printf("Contact added successfully!\n");
            } else {
                printf("Contact list is full!\n");
            }
        } 
        else if (choice == 2) {
            if (count == 0) {
                printf("No contacts found!\n");
            } else {
                printf("\nContact List:\n");
                for (int i = 0; i < count; i++) {
                    printf("%d. %s - %s\n", i + 1, contacts[i].name, contacts[i].phone);
                }
            }
        } 
        else if (choice == 3) {
            printf("Enter name to search: ");
            fgets(searchName, 50, stdin);
            searchName[strcspn(searchName, "\n")] = 0;

            int found = 0;
            for (int i = 0; i < count; i++) {
                if (strcmp(contacts[i].name, searchName) == 0) {
                    printf("Contact Found: %s - %s\n", contacts[i].name, contacts[i].phone);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Contact not found!\n");
            }
        } 
        else if (choice == 4) {
            printf("Exiting program...\n");
            break;
        } 
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
