#include<stdio.h>

main()
{
int x=1,n;
printf("enter n=");
scanf("%d",&n);
do
{
	if(n%2==0)
	{
		printf("%d ",n);
		
	}
	n--;
}while(n>=x);



}
