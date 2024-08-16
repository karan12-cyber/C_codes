#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<assert.h>
#include<limits.h>
#include<stdbool.h>
int main()
{
	int t,n,a,b,i,max,min;
	scanf("%d",t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);
		if(n==1)
		{
			scanf("%d",a);
			max=min=a;
		}
		     else{
			 
	        
	           scanf("%d %d",&a,&b);
	          } if(a>b)
			   {
			   	  max=a;
			   	  min=b;
			   	  
			   }  else
			       {
			       	  max=b,min=a;
			       	 }while(n-2>0)
			       	  {
			       	  	scanf("%d",&a);
			       	  	if(a>max){
							 
			       	  	max=a;
			       	  }	if(a<min)
			       	  {
						 
			       	  	min=a;
			       	  	n=n-1;
			       	  }
			       	  	
						 }
						    printf("min=%d max=%d\n",min,max);
						    
				   }
				        
				         return 0;
}
