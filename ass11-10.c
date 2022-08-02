#include<stdio.h>
void sum(int n);
int fact(int i);

int main()
{
    int n;
    printf("\n enter nth number to get sum of series : ");
    scanf("%d",&n);
    sum(n);
    return 0;
}
void sum(int n)
{
    int sum=0,i;
    for(i=1;i<=n;i++)
    {
        sum=sum+(fact(i)/i);
    }
    printf("\n sum is %d",sum);
}

int fact(int i)
{
    int j,p=1;
    for(j=1;j<=i;j++)
    {
        p=p*j;
    }
return p;
}
