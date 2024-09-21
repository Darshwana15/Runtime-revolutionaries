#include<stdio.h>
void main()
{
    int a;
    printf("Enter number");
    scanf("%d",&a);
    if(a>0)
    printf("%d is positive",a);
    else if(a<0)
    printf("%d is negative \n",a);
    else
    printf("The number is zero \n");
}