#include<stdio.h>
int original,remainder;
int reverse=0;
main()
{
int n;
printf("\n enter the value");
scanf("%d",&n);
original=n;
while(n!=0)
{
remainder=n%10;
reverse=(reverse*10)+remainder;
n=n/10;
}
if(original==reverse)
{
printf("\n yes",original);
}
else
{
printf("\n no",original);
}
return 0;
}
