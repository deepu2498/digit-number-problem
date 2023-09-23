#include<stdio.h>
int main()
{
	int num,first,last;
	int sum=0;
	printf("enter the number:");
	scanf("%d",&num);
	last=num%10;
	while(num!=0)
	{
		num=num/10;
		if(num<10)
		{
			first=num;
			break;
		}
		
	}
	sum=first+last;
	printf("the sum of first and last digit of number=%d ",sum);
	
	
	
	
}
