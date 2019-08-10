#include<stdio.h>
#include<stdlib.h>
int main()
{
   int x,p,sum=0;
   scanf("%d%d",&x,&p);
   p=100-p;
   while(x>0)
   {
       sum=sum+x;
       x=(p*x)/100;
   }
   printf("%d",sum);
   return 0;
}
