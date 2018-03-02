#include<stdio.h>
main()
{
 char s[50];
 int count=0,i;
 printf("enter a string: ");
 scanf("%[^\n]s",s);
 for(i=0;s[i]|='\0';i++)
 {
  if(s[i]==' ')
  count++;
 }
 printf("number of words given in a string are %d ",count+1);
}