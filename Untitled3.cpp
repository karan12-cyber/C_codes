#include<stdio.h>
int main()
{
	int x;
	printf("enter the leap year");
    scanf("%d",&x);
    if(x%400==0 || (x%4==0 && x%100!=0))
    {
    	printf("leap year");
    	
	} else {
		printf("not a leap year");
	}
	return 0;
}
