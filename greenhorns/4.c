#include<stdio.h>

main()
{
	float c,fahrenheit;
	
	printf("enter temperature c=");
	scanf("%f",&c);
	fahrenheit=(9/5*c)+32;
	printf("%.2f c=%.2f",c,fahrenheit);
}
