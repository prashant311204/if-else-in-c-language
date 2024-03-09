#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    if(n%5==0 && n%3==0)
    {
        printf("%d number is divisible by 5 and 3",n);
    }
    else
    {
          printf("%d number is not divisible by 5 and 3",n);
    }
    return 0;
}