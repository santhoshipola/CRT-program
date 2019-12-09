// find largest digit from given number
# include<stdio.h>
int main()
{
	int n,r,max=0;
	printf("enter n value\n");
	scanf("%d",&n);
	while(n!=0)
	{
	r=n%10;
	if(r>max)
	max=r;
	n=n/10;
    }
    printf("%d",max);
    return 0;
	
}
