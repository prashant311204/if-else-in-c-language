#include<stdio.h>
int main()
{
 
int n; 
    printf("enter number\n:"); 
    scanf("%d",&n); 
  /*  if (n%2==0)
    {
        printf("%d even number\n",n);
    }
    else
    {
        printf("%d odd number\n",n);
    }
*/
     //TERNERY OPERATORS
     // exp1 ? exp2 : exp3
     n%2==0 ? printf("even number"): printf("odd number");
    return 0;
}

