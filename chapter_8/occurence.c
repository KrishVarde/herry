#include <stdio.h>
// btw appologize me for the spelling mistakes
int main()
{
    int count = 0;
    char a[100] = {"hello I am sneaky santa"}, ch;
    printf("plz enter the character to find occurence:");
    scanf("%c", &ch);
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ch)
            count++;
    }
    printf("requested occurence:%d", count);
}