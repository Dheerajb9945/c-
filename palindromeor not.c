#include<stdio.h>
#include<string.h>
void main()
{
char str1[50],str2[50];
int i,j,len,x;
printf("Enter a String\n");
scanf(“%s”,str1);
j=0;
len=strlen(str1);
for(i=len-1;i>=0;i--)
{
str2[j]=str1[i];
j++;
}
str2[j]='\0';
printf("The original String =%s\n",str1);
printf("The reversed String= %s\n",str2);
x=strcmp(str1,str2);
if(x==0)
printf("%s is a palindrome\n",str1);
else
printf("%s is not a palindrome\n",str1);
}
