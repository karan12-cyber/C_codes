//bubble sort
#include <stdio.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++){
	
        for (int j = 0; j < n-i-1; j++)
    }        if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

void printArray(int arr[], int size) {
    for (int i=0; i < size; i++)
        printf("%d ", arr[i]);
        
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Unsorted array: \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;

 
// #include<stdio.h>
// int main()
// {
// 	int array[10] ,n,i,j,a;
// 	for(i=0;i<n-1;i++)
// 	{
// 		i=1;
// 		0<4;
//	 }
//	   for(j=0;j<n-1;j++)
//	   {
//	   	  0<4;
//	   	  j=0;
//	   	  
//	   } 
//	      if(a[j]>a[j+1])
//	      {
//	      int temp=a[j];
//	      	a[j]=a[j+1];
//	      	a[j+1]=temp;
//		  }
//		    return 0;
// }
// 
// 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
