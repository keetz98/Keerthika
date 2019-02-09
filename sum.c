#include <stdio.h>
int main()
{
   int number,sum=0,i;
   scanf("%d",&number);
   for(i=0;i<=number;i++)
   {
       sum=sum+i;
   }
   printf("%d",sum);
    return 0;
}
