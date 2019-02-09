#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c>=65 && c<=122)
    {
        printf("Alphabet");
    }
    else
    {
        printf("No");
    }
    return 0;
}
