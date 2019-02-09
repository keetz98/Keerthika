#include <stdio.h>
int main()
{
   int number,digits,sum=0,i,j,a[100];
   scanf("%d",&number);
   scanf("%d",&digits);
   for(i=0;i<number;i++)
   {
       scanf("%d",&a[i]);
    }
    for(j=0;j<=digits;j++)
    {
        sum=sum+j;
    }
   printf("%d",sum);
    return 0;
}


  
