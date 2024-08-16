#include<stdio.h>
int main()
{
	int COSTPRICE,SELLINGPRICE;
	printf("enter COSTPRICE\n");
	printf("enter SELLINGPRICE\n");
	scanf("%d",&COSTPRICE);
	scanf("%d",&SELLINGPRICE);
	if(COSTPRICE<SELLINGPRICE)
	{
		printf("profit\n"); 
	  int profit=SELLINGPRICE-COSTPRICE;
	  printf(" the profit is%d",profit);
		
	}if(COSTPRICE>SELLINGPRICE)
	{
		printf("loss\n");
		int loss = COSTPRICE-SELLINGPRICE;
		printf(" the loss is %d",loss);
		
	}  if(COSTPRICE==SELLINGPRICE)
	{
		printf("no profit no loss\n"); 
		int nothing = COSTPRICE-SELLINGPRICE;
		printf("%d",nothing);
	}
	 return 0;
}
