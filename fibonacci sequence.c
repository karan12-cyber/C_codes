#include<stdio.h>
int main()
{
	int a=0,b=1,c,i,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++) {
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
		
	}
	return 0;
}
