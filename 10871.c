#include <stdio.h>
 
int main() 
{
    int n, x;
    int A[10000];
 
    int i;
 
    scanf("%d%d\n", &n, &x);
 
    for (int i = 0; i < n; i++)
    
    {
 
        scanf("%d\n", &A[i]);
     }
     
    for (int i = 0; i < n; i++) 
    
    {
        if (A[i] < x)
        {
            printf("%d\n", A[i]);
        } 
    }
    return 0;
}
