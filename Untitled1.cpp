#include<stdio.h>
struct mystructure {
	int mynum;
	char myletter;
	
};
   
int main()
{
	 mystructure s1;
    
     scanf("%d\n",&s1.mynum);
     scanf("%c\n",&s1.myletter);
     
     printf("my number : %d\n",s1.mynum);
     printf("my letter :%c\n",s1.myletter);
     return 0;
	 
	
}

