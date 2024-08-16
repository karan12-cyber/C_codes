#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,r,f;
	scanf("%d",&n);
	r=n;
	f=0;
	while(r!=1)
	{
		if(r%2!=2)
		{
			f=1;
			break;
			
		}
		     r=r/2;
	}
	           if(f==0)
	           {
	           	 printf("%d",1);
	           	   
			   } else
			   {
			   	   printf("%d",0);
			   }
			         return 0;
	
}
