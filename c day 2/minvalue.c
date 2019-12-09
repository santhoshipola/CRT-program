// find largest digit from given number
# include<stdio.h>
int main()
{
	int n,r,min=9;
	printf("enter n value\n");
	scanf("%d",&n);
	while(n!=0)
	{
	r=n%10;
	if(r<min)
	min=r;
	n=n/10;
    }
    printf("%d",min);
    return 0;
	
}
