#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,r,s=0;
	scanf("%d",&n);
	int m=n;
	while(n>0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
		
	}
	     if(s==m)
	     {
	     	printf("palindrome.");
	     	
		 }    else
		       {
		       	  printf("not palindrome.");
			   }
			   return 0;
	
}
