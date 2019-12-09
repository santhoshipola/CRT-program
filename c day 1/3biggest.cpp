#include<stdio.h>
int main()
{
	int a=10,b=2,c=5,d;
	d=(a>b&&a>c)?a:b>c?b:c;
	printf("the biggest number is %d",d);
	return 0;
}
