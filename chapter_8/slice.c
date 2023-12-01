#include <stdio.h>
void slice(char[], int);
int main()
{
    char m[100] = {"you are a chaos"};
    printf("%s\n nah thats not true....\n",m);
    slice(m,10);
    printf("angel");
    return 0;
}
void slice(char a[], int m)
{
    int j=0;
    char s[100];
    for (int i = m; a[i] != '\0'; i++, j++)
    {
        s[j] = a[i];
    }
    a[m] = '\0';
    s[j] = '\0';
    printf("%s",a);
}