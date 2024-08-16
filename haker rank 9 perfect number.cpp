#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int r,s=0,n,i;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		r=n%i;
		if(r==0)
		{
			s=s+i;
		}
	}
	         if(s==n)
	         {
	         	printf("perfect.");
			 } else 
			   {
			   	 printf("not perfect");
			   }
			      return 0;
}

