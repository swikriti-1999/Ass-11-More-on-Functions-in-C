#include<stdio.h>
void prime(int n);
int main()
{
    int n;
    printf("\n enter the value for n to print frst peimw numbers: ");
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int n)
{
    int i,j,count;
    for(i=2;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        printf(" %d",i);
    }
}