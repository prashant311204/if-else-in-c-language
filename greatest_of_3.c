#include<stdio.h>
int main()
{
 int a,b,c;;
    printf("enter the 3 number:\n");
    scanf("%d %d %d",&a,&b,&c);
 if(a>b && a>c)
 {
    printf("a is greatest of them");
 }
else if (b>c)
{
    printf("b is greatest of them");
}
else
{
  printf("c is greatest of them");
}


    return 0;
}

