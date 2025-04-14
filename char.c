#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    // check the condition
    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("%c", ch);
    }
    else
    {
        ch = ch + 32;
        printf("%c", ch);
    }

    return 0;
}