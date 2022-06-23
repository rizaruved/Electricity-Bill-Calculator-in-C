#include <stdio.h>

int main() {
    int accNo;
    int unitsConsumed[3];   //For storing 3 months of value
    printf("Welcome to Electricity Bill Application\n\n");

    /*Start Gathering Inputs*/

    printf("Enter the Account Number to proceed\n");
    scanf("%d", &accNo);
    printf("Enter the units consumed in the past 3 months\n");
    
    for(int i=0; i<3; i++){
        scanf("%d", &unitsConsumed[i]);
    }

    /*End Gathering Inputs*/

    return 0;
}