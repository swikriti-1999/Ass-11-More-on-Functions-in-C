#include<stdio.h>
void fibb(int n);
int main()
{
    int n;
    printf("\n enter the value to find fibbonacci series: ");
    scanf("%d",&n);
    fibb(n);
    return 0;
}
void fibb(int n)
{
    int i,sum=0,current=1,prev=0;
    printf("0 1");
    for(i=3;i<=n;i++)
    {
        sum=prev+current;
        prev=current;
        current=sum;
        printf(" %d",sum);
    }
}