#include<stdio.h>
#include<math.h>
main()
{
	int n,k,result;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	printf("\n enter the value of k:");
	scanf("%d",&k);
	printf("\n the power value is:");
	result=pow(n,k);
	printf("%d",result);
	return 0;
}
