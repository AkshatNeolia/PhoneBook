#include <stdio.h>
#include <string.h>

// Structure to represent a contact
struct Contact {
    char name[50];
    char phoneNumber[20];
    char email[50];
};

// Function to perform binary search on sorted contacts array
int binarySearch(struct Contact contacts[], int low, int high, char searchName[]) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        int cmp = strcmp(contacts[mid].name, searchName);

        if (cmp == 0)
            return mid;
        else if (cmp < 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Function to perform insertion sort on contacts array
void insertionSort(struct Contact contacts[], int n) {
    int i, j;
    struct Contact key;
    for (i = 1; i < n; i++) {
        key = contacts[i];
        j = i - 1;

        while (j >= 0 && strcmp(contacts[j].name, key.name) > 0) {
            contacts[j + 1] = contacts[j];
            j = j - 1;
        }
        contacts[j + 1] = key;
    }
}

// Function to display contact information
void displayContact(struct Contact contact) {
    printf("| %-30s | %-15s | %-30s |\n", contact.name, contact.phoneNumber, contact.email);
}

// Recursive function for searching contact
void searchContact(struct Contact contacts[], int low, int high, char searchName[]) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        int cmp = strcmp(contacts[mid].name, searchName);

        if (cmp == 0) {
            printf("\nContact Found:\n");
            printf("+--------------------------------+------------------+-------------------------------+\n");
            printf("|             Name               |   Phone Number   |             Email             |\n");
            printf("+--------------------------------+------------------+-------------------------------+\n");
            displayContact(contacts[mid]);
            printf("+--------------------------------+------------------+-------------------------------+\n");
        } else if (cmp < 0) {
            searchContact(contacts, mid + 1, high, searchName);
        } else {
            searchContact(contacts, low, mid - 1, searchName);
        }
    } else {
        printf("\nContact not found!\n");
    }
}

int main() {
    struct Contact contacts[100];
    int n, i;

    // Input number of contacts
    printf("Enter number of contacts: ");
    scanf("%d", &n);

    // Input contacts
    for (i = 0; i < n; i++) {
        printf("\nEnter details for contact %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", contacts[i].name);
        printf("Phone Number: ");
        scanf("%s", contacts[i].phoneNumber);
        printf("Email: ");
        scanf("%s", contacts[i].email);
    }

    // Sort contacts by name
    insertionSort(contacts, n);

    // Input name to search
    char searchName[50];
    printf("\nEnter name to search: ");
    scanf("%s", searchName);

    // Perform binary search
    searchContact(contacts, 0, n - 1, searchName);

    return 0;
}
