#include<stdio.h>
void sqr(int n);
int main()
{
    int n;
    printf("\n enter a number: ");
    scanf("%d",&n);
    sqr(n);
    return 0;
}
void sqr(int n)
{
    int sq=0;
    sq=n*n;
    printf("square of given number is : %d",sq);
}