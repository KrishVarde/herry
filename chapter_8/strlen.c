#include <stdio.h>
#include <string.h>
int strlenzz(char a[]);
int main()
{
    char a[100] = {"santa with gun"};
    printf("%d", strlenzz(a));
    return 0;
}
int strlenzz(char a[])
{
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    count++;
        return count;
}