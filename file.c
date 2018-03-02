#include<stdio.h>
main()
{
FILE *fp;
char c,p;
fp=fopen("login.txt","w");
if(fp!=NULL)
{
while((c=getchar()) != EOF)
putc(c,fp);
putc(p,fp);
fclose(fp);
printf("values entered.");

}


else{
printf("Error opening the file");
}

}
