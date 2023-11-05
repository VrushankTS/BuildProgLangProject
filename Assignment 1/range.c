#include <stdio.h>

int calculateRange(int arr[], int size) 
{
    if (size <= 0) 
    {
        printf("Array is empty\n");
        return 0;
    }

    int min = arr[0]; 
    int max = arr[0]; 

    for (int i = 1; i < size; i++) 
    {
        if (arr[i] < min) 
            min = arr[i];
        else if (arr[i] > max) 
            max = arr[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    int range = max - min;
    return range;
}

int main() 
{
    int size;
    printf("Enter the size of your set of numbers: ");
    scanf("%d", &size);

    int num[size];
    printf("Enter the set of numbers: ");
    for(int i=0; i<size; i++)
        scanf("%d", num + i);

    int range = calculateRange(num, size);
    printf("The range of the given numbers is: %d\n", range);

    return 0;
}



