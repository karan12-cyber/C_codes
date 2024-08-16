#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int y,i;
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		if(i%400==0||(i%4==0&&i%100!=0))
		printf("%d\n",i);
		
	}
	  return 0;
}

