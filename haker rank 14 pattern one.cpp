#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,i,j,k=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=1;j<=pow(2,i);j++)
		{
			printf("%d",k);
			k++;
			
		}
		    printf("\n");
		    
	}
	         return 0;
	         
	
}
