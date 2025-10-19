#include <stdio.h>

int main(){

    float celsius, fahrenheit;
    int choice;

    //Displying the menu to the user
    printf("===== Temperature Converter =====\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2):");
    scanf("%d", &choice);

    // Checking the Temperature unit the user wants
    if (choice == 1){

        //Celsius to Fahrenheit conversion
        printf("\nEnter temperature in Celsius: ");
        scanf("%f", &celsius);

        //putting the formular = F = (C x 9/5) + 32
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

        printf("In Fahrenheit: %1f\n", fahrenheit);
        
    }
    else if (choice == 2) {
        // Fahrenheit to Celsus conversion
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        
        // add the formula: C = (F - 32) x 5/9
        celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

        printf("In Celsius: %.1f\n", celsius);
    }
    else {

        // Wrong Choice
        printf("Invalid choice Man! Please enter 1 or 2 and try agin.\n");
    }

    return 0;
}