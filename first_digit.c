#include <stdio.h>
int main()
{
    // get value from user
    int X;
    scanf("%d", &X);

    // get first digit
    int first_digit = X/1000;

    // check the condition
    if (first_digit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}