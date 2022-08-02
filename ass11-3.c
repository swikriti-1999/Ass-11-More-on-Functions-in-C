#include <stdio.h>
int prime(int n);
int main()
{
    int n, result;
    printf("\n enter a number to check its prime or not: ");
    scanf("%d", &n);
    result = prime(n);
    if (result == 1)
        printf("\n entered number is prime number");
    else
        printf("\n entered number is not prime");
    return 0;
}
int prime(int n)
{
    int i, count = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        return 1;
    else
        return 0;
}