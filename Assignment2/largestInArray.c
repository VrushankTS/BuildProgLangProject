#include <stdio.h>

int findMax(int arr[], int size) 
{
    // Base case
    if (size == 1) 
        return arr[0];
    else 
    {
        int maxi = findMax(arr + 1, size - 1);
        return (arr[0] > maxi) ? arr[0] : maxi;
    }
}

int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    int max = findMax(arr, n);
    printf("The largest number in the array = %d\n", max);

    return 0;
}
