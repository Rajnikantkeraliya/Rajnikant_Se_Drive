#include<stdio.h>
void main ()
{
	int num,tem,sum=0,reminder;
	printf("Enter The values:");
	scanf("%d",&num);
	tem=num;
	while (tem!=0)
	
	{
		reminder=tem%10;
		sum=sum+reminder;
		tem=tem/10;
		
	}
	printf("sum of %d is %d",num,sum);
}
