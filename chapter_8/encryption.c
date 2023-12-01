#include <stdio.h>
void encrypt(char[]);
void decrypt(char[]);
int main()
{
    char a[100]={"my name is walter white :P"};
    printf("%s",a);
    encrypt(a);
    printf("\n\n encrypted:%s",a);
    decrypt(a);
    printf("\n\n%s",a);
}
void encrypt(char a[])
{
    for (int i = 0; a[i] !='\0'; i++)
    {
        int e;
        e=a[i];
        e=e+60;
        a[i]=e;
    }
}
void decrypt(char b[])
{
    for (int i = 0; b[i]!='\0'; i++)
    {
        int e;
        e=b[i];
        e=e-60;
        b[i]=e;
    }
    
}