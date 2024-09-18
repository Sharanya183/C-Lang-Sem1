//to check if given number is a prime number or not

#include <stdio.h>

int n, i, isprime = 1;

int main()
{

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n<=1)
    {
        isprime = 0;
    }
    else
    {
        for(i = 2; i <= n/2; i++)
        {
            if((n%i) == 0)
            {
                isprime = 0;
            }else{
                isprime = 1;
            }
        }
    }

    if(isprime == 1)
    {
        printf("prime number");
    }
    else
    {
        printf("Not a prime number");
    }

}