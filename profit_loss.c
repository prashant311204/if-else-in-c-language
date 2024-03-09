#include<stdio.h>
int main()
{
    int sp,cp;
    printf("enter the value of cp\n");
    scanf("%d",&cp);
    printf("enter the value of sp\n");
    scanf("%d",&sp);
    if(cp>sp)
    {
        printf("loss\n");
    }
  else if(cp==sp)
  {
    printf("no profit no loss\n");
  }
  else
  {
    printf("profit\n");
  }



    return 0;
}