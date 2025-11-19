// Print the first N terms of the Fibonacci series starting from 0, 1.
#include<stdio.h>

int main(){
    int a=0,b=1,n;

   int nextterm = a+b;

    printf("Enter the number of terms: ");
    scanf("%d",&n);

    printf("****Fibonacci series N Term***\n");
   
     printf("%d, %d, ",a,b);

    for(int i=3; i<=n; ++i){
         printf("%d,",nextterm);
        a = b;
        b = nextterm;
        nextterm = a +b;
    }

    return 0;
}



