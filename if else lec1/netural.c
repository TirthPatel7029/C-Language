#include<stdio.h>

main()
{
	int num;
	printf("enter the value=");
	scanf("%d",&num);
	if(num<=0)
	{
		if(num==0)
		{
			printf("num is neatrual");
		}
			else
			{
				printf("num is negative");
			}
	}
	else
	{
		printf("num is positive");
	}
}
