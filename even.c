#include<stdio.h>
int even=2;
main()
{
	int i,n;
	printf("\n enter the value of n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(i%2==0)
		{
		printf("\n \t the even values are %d",i);
		}
	}
	return 0;
}
