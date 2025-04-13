#include <stdio.h>
int main()
{
    // get value from user
    int A, B;
    scanf("%d %d", &A, &B);

    // check the condition
    if (A >= B)
    {
        printf("Yes");
    }
    else
    {
        printf("No"); 
    }

    return 0;
}