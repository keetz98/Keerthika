#include<stdio.h>
int main()
{
    char num;
    int i,flag=0;
    scanf("%c",&num);
    for(i=48;i<=57;i++)
    {
        if(num==i)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
    if(num%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    }
    else
    {
        printf("Invalid");
    }
return 0;    
}

