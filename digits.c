#include <stdio.h>
int main()
{
   int number,count=0;
   scanf("%d",&number);
   while(number>0)
   {
   number=number/10;
   count++;
   }
      
   printf("%d",count);
    return 0;
}

