#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int t,b,n;
	long long int s;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		s=0;
		scanf("%d",&b);
		while(b--)
		{
			scanf("%d",&n);
			s=s+n*pow(2,b);
		}
		      printf("num=%||d\n",s);
		      
	}
	    
	     return 0;
	
}
