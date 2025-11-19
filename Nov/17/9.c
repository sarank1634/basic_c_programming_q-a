// Check whether a given integer is a powerful or not. A powerful number is a positive integer which is divisible by 2 and 5 both.
#include<stdio.h>

int main(){

    int x;

    printf("enter the the number: ");
    scanf("%d", &x);

    if(x % 2 == 0 && x % 5 == 0){
        printf("The number %d is powerful integer.\n",x);
    } else {
        printf("The number %d integer is not power.\n",x);
    }
    return 0;
}