// Rickshaw Fare Calculation

// Write a C program to calculate the rickshaw fare based on the distance traveled.

// Fare rules:

// If the distance is less than or equal to 3 km, the fare is a fixed ₹5.

// If the distance is more than 3 km, the fare is:

// ₹5 + ₹2 for every kilometer after the 3rd km

// Example:
// If the distance is 7 km, then
// Fare = 5 + (7 − 3) × 2 = 5 + 8 = ₹13

#include<stdio.h>

int main(){
    int distance,amount;
    

    printf("plese enter your distance: ");
    scanf("%d",&distance);

    if(distance <=3){
        printf("The your travel amount is 5");
    } else if (distance >=3)
    {
        amount = 5+2*(distance-3);
        printf("travel of total cost is %d",amount);
    }
    
    return 0;
}
