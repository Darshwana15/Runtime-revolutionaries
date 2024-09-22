#include<stdio.h>
void main()
{
    int a=1,b=2,c=3,d=4,e=5,f=3,i,j,sum;
    int set1[]={a,b,c,d,e,f};
    char set2[]={'a','b','c','d','e','f'};
    printf("The fair pairs are:\n");
    for (i=0;i<6;i++)

{
    for (j=0;j<6;j++)
    {
        sum=(set1[i]+set1[j]);

if(sum >=3 && sum<=6)

printf("%c%c\n",set2[i],set2[j]);
    }}
}