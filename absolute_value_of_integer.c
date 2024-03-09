#include<stdio.h>
int main( )
{
 int number;
 printf("enter integer\n");
 scanf("%d",&number);
 if(number>0)
 {
    printf("%d is positive number\n",number);
 }
else if(number=0)
{
    printf("%d is zero\n",number);
}

else
{
    printf("%d is negative number\n",number);
    int n=number*(-1);
    printf("%d \n",n);

}



    return 0;
}