#include <stdio.h>
int main ( )
{
    int n;  // dabba bna dega
    printf("enter number:"); 
    scanf("%d",&n); //dabba me value lega
    if (n%2==0)
    {
        printf("%d even number\n",n);
    }
    else
    {
        printf("%d odd number\n",n);
    }
    return 0;
}