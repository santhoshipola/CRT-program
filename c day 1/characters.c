#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	printf("uppercase");
	else if(ch>=97&&ch<=122)
	printf("lowercase");
	else if(ch>=48&&ch<=57)
	printf("digits");
	else
	printf("special character");
}
