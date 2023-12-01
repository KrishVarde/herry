#include <stdio.h>
void strcpy_(char[], char []);
int main()
{
    char o[100]={"spooky senta"},p[100];
    strcpy_(o,p);
    printf("%s",p);
}
void strcpy_(char a[], char b[])
{
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }
    b[i]='\0';
}