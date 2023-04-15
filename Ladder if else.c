#include<stdio.h>

main()

{
	int num;
	printf("Enter your number=");
	scanf("%d",&num);
	if(num<0)
	{
		printf("Num is Negetive number");
	}
	
	else if(num==0)
	{
		printf("Num is Neutral number");
	}
	
	else if(num>0)
	{
		printf("Num is Positive number");
	}
}
