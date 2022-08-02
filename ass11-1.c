#include<stdio.h>
int lcm(int n1,int n2);
int main()
{
    int n1,n2,result;
    printf("\n enter the frst and second number for lcm ");
    scanf("%d %d",&n1,&n2);
    result=lcm(n1,n2);
    printf("\n lcm of entered number is : %d",result);
    return 0;
}
int lcm(int n1,int n2)
{
    int i;
    for(i=1;i<=n1*n2;i++)
    {
        if(i%n1==0 && i%n2==0)
        break;
    }
    return i;
}