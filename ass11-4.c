#include <stdio.h>
int prime(int n);
int main()
{
    int n, result;
    printf("\n enter a number to check next prime : ");
    scanf("%d", &n);
    result = prime(n + 1);
    printf("\n next prime numbewr is %d", result);
    return 0;
}
int prime(int n)
{
    int i, count,j;
    for (i = n; i >= n; i++)
    {
        count=0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
        break;
    }
    return i;
}