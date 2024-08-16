#include<stdio.h>
int main()
{ 
  int day;
   printf("enter a number (1-7) to repreasent to represent a day of  the week:");
   scanf("%d",&day);
   switch(day){
   	
   	case 1:
    printf("sunday\n");
    break;
    case 2:
    	printf("monday\n");
    	break;
    	case 3:
    		printf("tuesday\n");
    		case 4:
    			printf("wednesday\n");
    			break;
    			case 5:
    				printf("thursday\n");
    				break;
    				case 6:
    					printf("friday\n");
    					break;
    					case 7:
    						printf("saturday\n");
    						break;
    					      default:
							           printf("this type of day is not exist ");
   }
   return 0;
}
