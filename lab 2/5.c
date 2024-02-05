#include<stdio.h>

main()
{
int x,n;
printf("enter n=");
scanf("%d",&n);
do
{
	if(x%2==1)
	{
		printf("%d",x);
		
	}
	x++;
}while(x<=n);



}
