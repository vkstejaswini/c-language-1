#include<stdio.h>
main(){
	FILE *fp;
	char c;
	if((fp==fopen("login.txt","r"))!=NULL)
	{
		while((c=getc(fp))!=EOF)
		putchar(c);
		fclose(fp);
		
	}
	else
	printf("Error in opening the file");
}
