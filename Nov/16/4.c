// 4. Take start and end as input from terminal and do for loop increment = 10, (start=20, end=408).

#include<stdio.h>

int main(){
    int start,end;

    printf("plese enter the starting value: ");
    scanf("%d",&start);

    printf("plese enter the end value: ");
    scanf("%d",&end);
    
    for(int i=start;i<=end;i+=10){
        printf("%d",i);
    }
    return 0;
}