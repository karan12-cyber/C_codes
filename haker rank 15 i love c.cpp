#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main() {
int h,d,i,j;
    scanf("%d",&h);
    for(i=0;i<h;i++){
        for(j=0;j<h;j++){
            if(i==0||i==h-1)
                printf("*");
            else if(j==h/2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<h;i++){
        printf("*");
        for(j=1;j<=h-1;j++){
            if(i==h-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<=h;i++){
        for(j=1;j<=h;j++){
            if(i==1||i==h||j==1||j==h)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    int a=1;
    d=h;
    for(i=1;i<=h;i++){
        for(j=1;j<=h;j++){
            if(j==a||j==d)
                printf("*");
            else
                printf(" ");
        }
        if(i%2==0){
            a=a+1;
            d=d-1;
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<h;i++){
        printf("*");
        for(j=0;j<h-1;j++){
            if((i==0||i==h-1)||i==(h/2))
                printf("*");
            else
                continue;
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<h;i++){
        printf("*");
        for(j=0;j<(h-1);j++){
            if(i==0||i==h-1)
                printf("*");
            else
                continue;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

