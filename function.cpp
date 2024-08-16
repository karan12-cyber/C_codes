#include <stdio.h> 
//declararation prototype
void  printtable (int n);

int main()
{ 
int n;
	printf("enter number ");  
	  scanf("%d",&n); 
	 printtable (n);  //argument actual parameter 
	return 0;
	
}
 
 void printtable(int n){ //parameter/funtional parameter 
 
 for(int i=1;i<=10;i++)
 printf("%d\n",i*n);//function definition
 	
 }
