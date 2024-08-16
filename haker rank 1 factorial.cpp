#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,i;
	unsigned long long fact=1;
	scanf("%d",&n);
	if(n<0){
		printf("error!factorial of a negative number does not exist");
	} else{
		for(i=1;i<=n;++i){
			fact*=i;
		}
		return 0;
	}
}
