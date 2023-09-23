#include<stdio.h>
int main()
{
	int num;
	int first,last;
	printf("enter the number:");
	scanf("%d",&num);
	 last=num%10;
	while(num!=0)
	{
	    num=num/10;
	    if(num<10){
	    first=num;
	    break;
	}
		
    }
	printf("first digit is=%d\n",first);
	printf("last digit is=%d",last);
	
	
	
}
