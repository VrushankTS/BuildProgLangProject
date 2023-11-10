#include <stdio.h>
#include <string.h>

struct Person 
{
    char name[50];
    char address[100];
    char telephone[15];
}typedef Person;

int searchByName(Person people[], int n, char targetName[]) 
{
    for (int i = 0; i < n; i++) 
    {
        if (strcmp(people[i].name, targetName) == 0) 
            return i;         
    }
    return -1; 
}

int searchByTelephone(Person people[], int n, char targetTelephone[]) 
{
    for (int i = 0; i < n; i++) 
    {
        if (strcmp(people[i].telephone, targetTelephone) == 0) 
            return i; 
    }
    return -1; 
}

int main() 
{
    int n;
    printf("Enter the number of people you want to have: ");
    scanf("%d", &n);

    Person people[n];
    int res, choice;
    char searchName[50], searchTelephone[15];

    for (int i = 0; i < n; i++) 
    {
        printf("\nEnter details for person %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", people[i].name);
        printf("Address: ");
        scanf(" %[^\n]", people[i].address);
        printf("Telephone: ");
        scanf(" %s", people[i].telephone);
    }

    // Menu-driven search
    do {
        printf("\nMenu:\n");
        printf("1. Search by name\n");
        printf("2. Search by telephone number\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("\nEnter the name to search: ");
                scanf(" %[^\n]", searchName);
                res = searchByName(people, n, searchName);
                break;

            case 2:
                printf("\nEnter the telephone number to search: ");
                scanf(" %s", searchTelephone);
                res = searchByTelephone(people, n, searchTelephone);
                break;

            case 3:
                printf("\nExiting the program.\n");
                return 0;

            default:
                printf("\nInvalid choice. Please enter a valid option.\n");
                continue;
        }

        if (res != -1) 
        {
            printf("\nPerson found:\n");
            printf("Name: %s\n", people[res].name);
            printf("Address: %s\n", people[res].address);
            printf("Telephone: %s\n", people[res].telephone);
        } 
        else 
            printf("Person not found.\n");

    } while (choice != 3);

    return 0;
}
