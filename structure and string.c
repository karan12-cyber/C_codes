#include<stdio.h>

struct mystructure {
	int mynum;
	char myletter;
	char mystring[30];
	
	
};

   int main(){
   
   struct mystructure s1={13, 'B',"nice"};
   printf("%d %c %s",s1.mynum,s1.myletter,s1.mystring);
   return 0;

}
