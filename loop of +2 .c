#include<stdio.h>
int main()
{
	int st,end;
	printf("enter the end point for the loop \n");
	scanf("%d",&end);
	printf("enter starting point \n");
	scanf("%d",&st);
	while(st<=end)
	{
		printf("%d\n",st);
		st+=2;
}
}
