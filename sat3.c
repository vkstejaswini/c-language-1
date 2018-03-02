#include<stdio.h>
struct sem{
	int s1,s2,s3,s4,s5,s6;
	
}s;
main(){
	agg();
}
void agg(){
	int aggregate;
	printf("enter details:");
	scanf("%d%d%d%d%d%d",&s.s1,&s.s2,&s.s3,&s.s4,&s.s5,&s.s6);
	aggregate=((s.s1+s.s2+s.s3+s.s4+s.s5+s.s6)/6);
	printf("aggregate is %d",aggregate);
}
