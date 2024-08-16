#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i=i+1){
	
	int n,s=0,a;
	scanf("%d",&n);

		while(n!=0)
	{
		a=n%10;
		s=s+a;
		n=n/10;	
	}
	     printf("%d\n",s);
}
	
          return 0;
}
