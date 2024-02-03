#include<stdio.h>

main()
{
	int x=1,y;
	printf("enter the value of y=");
	scanf("%d",&y);
	while(x<=y)
	{
		if(x%2!=0)
		{
		printf("%d ",x);
		}
	x++;
	}
}
