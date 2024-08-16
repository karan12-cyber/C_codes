#include<stdio.h>
 int main()
 {
 	int num;
	 int a=10,b=5;
	 
 	printf(" 1.add \n 2.sub\n 3.multiply\n 4.division");
 	switch (num)
 	{
 		case 1: 
		 
 		printf("%d addition is", a+b);
 		break;
 		case 2:
		 
 		printf("%d subtraction",a-b);
 		break;
 		case 3:
		 
 		printf("%d multiplication",a*b);
 		break;
 		case 4:
		 
 		printf("%d divison",a/b);
 		break;
 		default:
 		printf(" select the correct option");
	 }
 	return 0;
 }
