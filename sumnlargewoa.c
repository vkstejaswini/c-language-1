#include<stdio.h>
main()
{
	int n,c,sum=0,value,large,num=0;
	printf("enter n value:");
	scanf("%d",&n);

	for(c=0;c<n;c++)
	{
			printf("\nenter integer: ");
	scanf("%d,&value");
	
	sum=sum+value;
	large=(num>value?num:value);
	
	
	}
 num=value;
	printf("total sum is:%d",sum);
	printf("the largest number is %d",large);
	
}
