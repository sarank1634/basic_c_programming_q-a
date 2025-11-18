// 6. Take age as input and print if the person is major or not
#include<stdio.h>

int main(){
    int age;

    printf("plese enter your age: ");
    scanf("%d",&age);

    if (age >= 18)
    {
        printf("the persion is major");
    } else{
        printf("the person is not a major");
    }
    return 0;
}