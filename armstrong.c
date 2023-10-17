#include<stdio.h>
int main()
{int n,originalnum,remainder,result=0;
printf("enter the value of n: ");
scanf("%d",&n);
originalnum=n;
while(originalnum!=0)
{
remainder=originalnum%10;
result+=remainder*remainder*remainder;
originalnum /=10;}
if(result==n)
printf("number is armstrong");
else
printf("number is not armstrong");
return 0;
}
