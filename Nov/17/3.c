// Read an integer and print its digits reversed (e.g., 1234 -> 4321).
#include<stdio.h>

int main(){
 
    int num ;
    printf("enter your number:");
    scanf("%d",&num);

    for(int i=num;i>0;i--){
        printf("%d",i);
    }

    return 0;
}