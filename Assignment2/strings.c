#include <stdio.h>
#include <string.h>

void getLength(char str[]) 
{
    printf("Length of the string: %lu\n", strlen(str));
}

void copyString(char dest[], char src[]) 
{
    strcpy(dest, src);
    printf("String copied successfully.\n");
}

void compareStrings(char str1[], char str2[]) 
{
    int result = strcmp(str1, str2);
    
    if (result == 0) 
        printf("Strings are equal.\n");
    else if (result < 0) 
        printf("String 1 is smaller than String 2.\n");
    else 
        printf("String 1 is larger than String 2.\n");   
}

int main() 
{
    char str1[100], str2[100];
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Find length of a string.\n");
        printf("2. Copy a string to the other.\n");
        printf("3. Compare two strings.\n");
        printf("4. Exit.\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter the string: ");
                scanf(" %[^\n]", str1);
                getLength(str1);
                break;

            case 2:
                printf("Enter the source string: ");
                scanf("%s", str1);
                copyString(str2, str1);
                break;

            case 3:
                printf("Enter the first string: ");
                scanf("%s", str1);
                printf("Enter the second string: ");
                scanf("%s", str2);
                compareStrings(str1, str2);
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid choice.\n");
        }

    } while (choice != 4);

    return 0;
}
