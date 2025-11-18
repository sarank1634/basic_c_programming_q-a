// Take a number as input and if that number is ODD or Even.

#include<stdio.h>

int main(){
    int value;

    printf("plese the your number: ");
    scanf("%d",&value);

    if(value/2==0){
        printf("the number is EVEN");
    } else{
        printf("the number is ODD");
    }
    return 0;
}