//swapping numbers

#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping a: %d  b: %d", a, b);
}