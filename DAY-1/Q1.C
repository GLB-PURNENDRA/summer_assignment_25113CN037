// WRITE A PROGRAM TO CALCULATE SUMIOFFIRST N NATURAL NUMBER
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("enter the numer:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum=%d",sum);
    return 0;
}