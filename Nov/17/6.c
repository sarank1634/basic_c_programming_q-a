// Read three integers and print the largest.
#include<stdio.h>

int main(){
   
    int a,b,c,result;
    printf("Plese enter the three number: ",a,b,c);
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>b && a>c){
        printf("The %d largest Integer\n",a);
    } else if (b > a && b > c)      
    {
        printf("The %d largest Integer\n: ",b);
    }else{
        printf("%d is the largest number");
    }
    
    return 0;
}