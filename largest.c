#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the numbers a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b && a >= c)
    printf("%d is the largest number.\n", a);
    if (b >= a && b >= c)
    printf("%d is the largest number\n", b);
    if (c >= a && c >= b)
    printf("%d is the largest number.\n", c);
}
