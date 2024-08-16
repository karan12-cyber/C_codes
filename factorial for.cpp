#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,n,fact=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	printf("factorial=%d",fact);
	getch();
}
