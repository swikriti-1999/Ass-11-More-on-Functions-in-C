

#include <stdio.h>
int fact(int n);
int comb(int n, int r);
void pascal(int n);
int main()
{
    int n, r;
    printf("\n enter value of n : ");
    scanf("%d", &n);
    pascal(n);
    return 0;
}
int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int comb(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
void pascal(int n)
{
    int i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", comb(i, j));
        }
        printf("\n");
    }
}
