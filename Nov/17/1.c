// Check if a number is positive, negative, or zero.

#include<stdio.h>

int main(){
       int num;
       printf("enter a number: ");
       scanf("%d",&num);

       if (num>0){
        printf("your %d is positive",num);
       } else if (num <0 )
       {
        printf("your %d is a negative number",num);
       } else if (num = 0)
       {
        printf("your %d is zero",num);
       }
       return 0;
}