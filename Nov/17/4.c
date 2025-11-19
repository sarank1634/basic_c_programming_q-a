// Check if a given string is a palindrome (ignoring case).
#include<stdio.h>
#include<string.h>

int main(){
    char palin[30];
    char result[] = "";

    
    printf("Plese enter your string:");
    scanf("%s",&palin);

    int length = sizeof(palin) / sizeof(palin[-1]);


    for(int i=0;i<length;i--){
       
      if(palin == result){
        printf("the given string is a palindrome",result);
    } else{
        printf("the given string is not a palindrome",result);
    }
  
    }
    
}