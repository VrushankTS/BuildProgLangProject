#include <stdio.h>

void fillScreenWithSymbols(int rows, int cols) 
{
    int i, j;
    for(i=0; i<rows; i++) 
    {
        for(j=0; j<cols; j++) 
        {
            if((i+j) % 2 == 0) 
                printf("\u2666"); // Diamond symbol (Unicode)
            else 
                printf("\u2665"); // Heart symbol (Unicode)
        }
        printf("\n");
    }
}

int main() 
{
    int rows = 40;
    int cols = 156;

    fillScreenWithSymbols(rows, cols);

    printf("Press any key to exit...");
    getchar(); // Wait for a key press before exiting

    return 0;
}


