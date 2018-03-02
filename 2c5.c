#include<stdio.h>
int max();
 int main()
{
	
	printf("max value is :%d",max());
}
int max()
{
	int n,a[10],i,max=0;
	printf("enter n value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		max=max>a[i]?max:a[i];
	}
	
	return(max);
}
