// 5. Take a number as input from terminal and print tabels from 1 to 20 for that number.
#include<stdio.h>

int main(){
    int start;

    printf("plese enter the starting value: ");
    scanf("%d",&start);

    for(int i=start;i<=20;i+=1){
        printf("%d\n",i);
    }
}