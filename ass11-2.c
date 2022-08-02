#include<stdio.h>
int hcf(int n1,int n2);
int main()
{
    int n1,n2,result;
    printf("\n enter the frst and second number for hcf ");
    scanf("%d %d",&n1,&n2);
    result=hcf(n1,n2);
    printf("\n hcf of entered number is : %d",result);
    return 0;
}
int hcf(int n1,int n2)
{
    int i;
    for(i=1;i<=n1*n2;i++)
    {
        if(i%n1==0 && i%n2==0)
        break;
    }
    return n1*n2/i;
}