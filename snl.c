#include<stdio.h>
int Max(int a,int b,int c)
int Min(int a,int b,int c)
main()
{
int a,b,c,min,max;
printf("enter the value of a,b,c:");
scanf("%d,%d,%d",&a,&b,&c);
max= Max(a,b,c);
printf("the largest value is:%d",max);
min= Min(a,b,c);
printf("the min value is:%d",min);
	
}
int max(int a,int b,int c){
   int	max=(((a>b)&&(a>c))?a:(b>c)?b:c);
	return max;
}
int min(int a,int b, int c){
  int min=(((a<b)&&(a<c))?a:(b<c)?b:c);
	return min;
}
