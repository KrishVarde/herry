#include <stdio.h>
int main()
{
    int count = 0;
    char a[100] = {"hello I am sneaky santa"}, ch;
    printf("plz enter the character check if is not in string:");
    scanf("%c", &ch);
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ch)
            count++;
    }
    if (count != 0)
    {
        printf("given character is in string");
    }
    else
        printf("given character is not in string");
}