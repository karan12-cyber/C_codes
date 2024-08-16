#include<stdio.h>
int main()
{ 
  char ope;
  double num1,num2,result;
  printf("simple calculater\n ");
  printf("enter an operater (+,-,*,/):");
  scanf("%c",&ope);
  printf("enter number first");
  scanf("%lf",&num1);
  printf("enter number second");
  scanf("%lf",&num2);
  switch (ope)
  {
  	case '+':
  		result=num1+num2;
  		printf("result %.2lf+%.2lf=%.2lf\n",num1 ,num2,result);
  		break;
  		case '-':
  			result=num1-num2;
  			printf("result %.2lf-%.2lf=%.2lf\n", num1,num2,result);
  			break;
  			case '*':
  				result=num1*num2;
  				printf("result %.2lf*%.2lf=%2.lf\n", num1,num2,result);
  				break; 
  				case'/':
  					result=num1/num2;
  				printf("result %.2lf/%.2lf=%.2lf\n",num1,num2,result);
  				break; 
  				default:
  					printf("error:division by zero\n");
  				
  				
  					printf("error: invalid operator\n");
  				
  }
  return 0;
}
