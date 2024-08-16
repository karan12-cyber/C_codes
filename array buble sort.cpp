#include<stdio.h>
int main()
{// bubble sort
	int array[100],n,c,d,swap;
	
	printf("enter number of element \n");
	
	 scanf("%d",&n);
	
	   printf("enter %d integer \n",n);
	
         for(c=0;c<n;c++){
	
        	scanf("%d",&array[c]);
	
}             for(c=0;c<n-1;c++)
      {
      	        for(d=0;d<n-c-1;d++)
      	{
      		       if(array[d]>array[d+1])
      		{
      		        	swap=array[d];
      		        	
      		           	  array[d]=array[d+1];
      		           	  
      			             array[d+1]=swap;
      			
			  }
		  }
	  }
	                             printf("shortest list in assending order \n");
	                   
	                   
	                               for(c=0;c<n;c++)
	                   {
	                                	printf("%d\n",array[c]);
	                   	
					   }
					           
					                      return 0;
	
}


