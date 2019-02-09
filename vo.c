#include<stdio.h>
int main()
{
    int i;
    char a;
    char v[]={'a','e','i','o','u','A','E','I','O','U'};
    char c[]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z'};
    scanf("%c",&a);
    for(i=0;i<=10;i++)
    {
        if(a==v[i])
        {
            printf("Vowel");
        }
        else if(a==c[i])
        {
            printf("Consonant");
        }
        else
        {
            printf("invalid");
        }
        break;
        
    }
    return 0;
}
