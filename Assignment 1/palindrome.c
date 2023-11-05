#include <stdio.h>

int main() 
{
    int n, rev = 0, rem, copy, digits = 0;
    printf("Enter a 7 digit integer: ");
    scanf("%d", &n);
    copy = n;

    while(n != 0)
    {
        digits++;
        n = n / 10;
    }

    if(digits == 7)
    {
        n = copy;
        while (n != 0) 
        {
            rem = n % 10;
            rev = rev * 10 + rem;
            n /= 10;
        }
        printf("Reversed number = %d\n", rev);
        if (copy == rev)
            printf("%d is a palindrome.\n", copy);
        else
            printf("%d is not a palindrome.\n", copy);
    }

    else
        printf("Please enter a valid number!\n");

    return 0;
}