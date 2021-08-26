#include <stdio.h>

int main()
{
    char str[100];
    int i, j, l, temp;

    printf("Enter string: ");
    gets(str);

    /* finding length of string */
    for (l = 0; str[l] != '\0'; l++);

    /* reverse the string */
    for (i = 0, j = l - 1; i < l / 2; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reverse string: %s", str);

    return 0;
}

