#include<stdio.h>
void prime(int n,int n2);
int main()
{
    int n1,n2;
    printf("\n enter frst and second value to print prime numbers between them: ");
    scanf("%d %d",&n1,&n2);
    prime(n1+1,n2-1);
    return 0;
}
void prime(int n1,int n2)
{
    int i,j,count;
    for(i=n1;i<=n2;i++)
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