#include <stdio.h>

int main() 
{
    for (int y = 1; y <= 6; y++) 
    {
        float i = 0;
        printf(".------+-----------------\n");
        printf("| y = %d\t| X\t| i\t|\n", y);
        printf("|------+-----------------\n");

        for (float x = 5.5; x <= 12.5; x += 0.5) 
        {
            i = 2 + y + 0.5 * x;
            printf("| \t| %.1f\t| %.2f\t|\n", x, i);
        }
        
        printf(".------+----------------\n\n");
    }

    return 0;
}
