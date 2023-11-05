#include <stdio.h>  
  
int main()  
{  
    float x1, y1, x2, y2, x3, y3, m, n, p;  
  
    printf("Enter point 1 (x1, y1): ");  
    scanf("%f%f", &x1, &y1);  
  
    printf("Enter point 2 (x2, y2): ");  
    scanf("%f%f", &x2, &y2);  
  
    printf("Enter point 3 (x3, y3): ");  
    scanf("%f%f", &x3, &y3);  
  
    m = (y2 - y1) / (x2 - x1);  
    n = (y3 - y2) / (x3 - x2);
    p = (y3 - y1) / (x3 - x1);
  
    if(m== n && n==p && m==p)  
        printf("All 3 points lie on the same line\n");      
    else  
        printf("All 3 points do not lie on the same line\n");    
  
    return 0;  
}