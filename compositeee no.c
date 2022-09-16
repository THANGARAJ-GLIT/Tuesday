#include<stdio.h>
int main()
{
   int fvalue, lvalue, i;
   printf("Enter the range a and b\n");
   scanf("%d%d",&fvalue,&lvalue);
   for(i=fvalue;i<=lvalue;i++)
   {
     printf("%d ",i);
   }
   return 0;
}
