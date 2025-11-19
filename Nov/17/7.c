// Take three integers as input and print their sum and product.
#include<stdio.h>

int main(){
    int a,b,c,sum,multi;

    printf("Enter the First number: ",a);
    scanf("%d",&a);

    printf("Enter the First number: ",b);
    scanf("%d",&b);

    printf("Enter the First number: ",b);
    scanf("%d",&c);

    sum = a+b+c;
    printf("The sum of  Three digits is2 %d\n",sum);

    multi = a*b*c;
    printf("The multi of Three digits is %d\n",multi);

    return 0;
}