#include<stdio.h>
int main()
{
	int n,buffer,num,r,sum=0;
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
    	r=n%10;
    	sum=sum+r*r*r;
    	n=n/10;
    	
	}
	if(num==sum)
	printf("armstrong");
	else
	printf("not a arm");
	return 0;
}
