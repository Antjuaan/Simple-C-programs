//program that prints a discounted price with data entered by the user
#include <stdio.h>

int main() {
    //declare variables
    float price, discount, priceRemoved, result;
    
    //the user enters the data he wants
    printf("Enter the price to be discounted: ");
    scanf("%f", &price);

    printf("Enter the percentage of discount: ");
    scanf("%f", &discount);

    //check if the discount is less than 100%. If it's higher the program stops
    if (discount > 100) {
        printf("Discount too high, must not exceed 100!\n");
        return(0);
    }

    //calculations to make the percentage and have the discounted price
    priceRemoved = (discount / 100) * price;
    result = price - priceRemoved;

    printf("The discounted price is: %.2f €\n", result);

}