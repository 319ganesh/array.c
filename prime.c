#include<stdio.h>
main()
{
	int n;
	printf("\n enter the value of n");
	scanf("%d",&n);
	if((n%2==0)||(n%3==0))
	{
		printf("\n it is not a prime number",n);
	}
	else if(n%n==0)
	{
		printf("\n it is a prime number",n);
	}
	else
	{
		printf("\n it is a prime number",n);
	}
	return 0;
}
