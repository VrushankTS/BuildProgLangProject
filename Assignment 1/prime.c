#include<stdio.h>

int main()
{
    int count,n;
    printf("Enter max limit: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        count = 0;

        for(int j=2; j<=i/2; j++)
        {
            if(i % j == 0)
            {
                count++;
                break;
            }
        }
        
        if(count==0 && i!= 1)
            printf("%d ", i);
    }
  
    return 0;
}