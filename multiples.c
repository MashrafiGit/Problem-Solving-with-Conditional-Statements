#include <stdio.h>

int main()
{
    // get value
    int A, B;
    scanf("%d %d", &A, &B);

    // check the condition
    if (A % B == 0)
    {
        printf("Multiples");
    }
    else if (B % A == 0)
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }
    return 0;
}