#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *file;
    char data[1024];

    // Read data from the keyboard
    printf("Enter data to write to file:\n");
    fgets(data, sizeof(data), stdin);

    // Write data to the file
    file = fopen("DATA.txt", "w");

    if (file == NULL) 
    {
        printf("Error opening file. Exiting program.\n");
        return 1;
    }

    fprintf(file, "%s", data);
    fclose(file);

    file = fopen("DATA.txt", "r");

    if (file == NULL) 
    {
        printf("Error opening file. Exiting program.\n");
        return 1;
    }

    printf("\nData read from file:\n");

    while (fgets(data, sizeof(data), file) != NULL) 
    {
        printf("%s", data);
    }

    fclose(file);

    return 0;
}

