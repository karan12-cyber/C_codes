#include<stdio.h>
int main()
{
	int number; 
	printf("enter a apsolute number: ");
	
	scanf("%d",&number);
	if (number>=0)
	{
		printf("absolute number");
		
	} if (number<0)
	{
		number=number*(-1);
		printf("absolute number %d", number);
		
	}
	     return 0;
}
