#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,n,fact=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	do
	{
		fact=fact*i;
		i++;
		
	}
	while(i<=n);
	printf("factorial=%d",fact);
	getch();
}
