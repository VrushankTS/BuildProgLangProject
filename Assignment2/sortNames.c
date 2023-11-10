#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Bubble sort algorithm is used
void sortNames(char *names[], int n) 
{
    for (int i=0; i<n-1; i++) 
    {
        for (int j=0; j<n-i-1; j++) 
        {
            if (strcmp(names[j], names[j+1]) > 0) 
            {
                char *temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);

    char **names = (char **)malloc(n * sizeof(char *));

    if (names == NULL) 
    {
        printf("Memory allocation failed. Exiting program.\n");
        return 1;
    }

    printf("Enter the names:\n");
    for (int i=0; i<n; i++) 
    {
        char buffer[100];
        printf("Name %d: ", i + 1);
        scanf(" %[^\n]", buffer);

        names[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(names[i], buffer);
    }

    sortNames(names, n);

    printf("\nSorted Names:\n");
    for (int i = 0; i < n; i++) 
        printf("%s\n", names[i]);
    
    // Free allocated memory
    for (int i = 0; i < n; i++)
        free(names[i]);

    free(names);
    return 0;
}
