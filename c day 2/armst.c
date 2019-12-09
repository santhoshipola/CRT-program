#include<stdio.h>
#include<math.h>
int main()
{
	int n,buffer,l=0,num,r,sum=0;
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
    	l++;
    	n=n/10;
	}
	n=num;
    while(n!=0)
    {
    	r=n%10;
    	sum=sum+pow(r,l);
    	n=n/10;
    	
	}
	if(num==sum)
	printf("armstrong");
	else
	printf("not a arm");
	return 0;
}
