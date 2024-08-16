#include<stdio.h>
int main()
{
	float f ;
	printf("enter a number ");
	
	scanf("%f",&f);
	int x= (int)f;
	float a=(float)x;
	if(f-a==0)
	{
		printf("number is integer");
		
	} if(f-a>0)
	{
		printf("number is not an integer");
		
	}
	       return 0;
}        
