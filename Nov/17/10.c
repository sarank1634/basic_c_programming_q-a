// Simple calculator: read two numbers and an operator (+, -, *, /) and print the result using switch-case.
#include<stdio.h>

int main(){
    int a,b;
    int op;
    float result;

    printf("1: addtion\n");
    printf("1: subtraction\n");
    printf("1: multiplication\n");
    printf("1: division\n");

    printf("enter the First number:");
    scanf("%d",&a);

    printf("enter the Second number:",b);
    scanf("%d",&b);

    printf("choose option:",op);
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        result = a+b ;
        printf(" adding ");
        break;
    case 2:
        result = a-b;
        printf(" subration ");
        break;
    case 3:
        result = a*b;
        printf(" multiplication ");
        break;
    case 4:
        result = a/b;
        printf(" division ");
        break;
    default:
        printf("Invalid operation");
        return 0;
        
    }
    
    printf("The result is:%2f",result);
  
    return 0;

}