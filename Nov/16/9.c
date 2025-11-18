// Take a number as inout if it is divisible by 3 and 5 print "Good number" else print "Bad Number".
#include<stdio.h>

int main(){

    int number;
    printf("plese ther your number: ");
    scanf("%d",&number);

    if(number /3){
        printf("the number is good number");
    } else if (number /5)
    {
        printf("the number is good number");
    }
     else{
        printf("the number is bad number");
    }
    return 0;
}