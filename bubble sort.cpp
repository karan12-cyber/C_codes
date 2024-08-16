#include<stdio.h>


	void swap(int*xp,int*yp){
		int temp =*xp;
		*xp=*yp;
		*yp=temp;
		
	}
	    void bubbleshort(int arr[] ,int n,int bubble,int bubblesort)
{
	for(int i=0;i<n-1;i++)
	{
	   for(int j=0;j<n-1;j++)
	   {
	   	if(arr[j]>arr[j+1])
	   	swap(&arr[j],&arr[j+1]);
	   	
	   }
	}
}
          void printarray(int arr[],int size){
          	for(int i=0;i<size;i++)
          	printf("%d",arr[i]);
          	
          	printf("\n");
          	
		
		  }
		      int main()
		      {int arr[]={64,34,25,12,22,11,90};
		      int n=sizeof (arr)/ sizeof(arr[0]);
		      printf("unsorted array\n");
		      printarray(arr,n);
		      bubblesort(arr,n);
		      printf("sorted array\n");
		      printarray(arr,n);
		      return 0;
			  }
