#include <stdio.h>

int main() {

	double num1, num2, result;
	char operation;

	// Get first number from the user
	printf("Enter first number: ");
	scanf("%lf", &num1);

	// Get second number from user
	printf("Enter second number: ");
	scanf("%lf", &num2);

	// Get operation from user
	printf("Choose operation (+, -, *, /): ");
	getchar();
	scanf(" %c", &operation); 

	// Perform the calculation based on the chosen operation
	switch(operation) {
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			// Check for division by zero
			if(num2 != 0) {
				result = num1 / num2;
			} else {
				printf("Error: Division by zero is clearly an error man!\n");
				return 1; // Exit with error code
			}
			break;
		default:
			printf("Error: Invalid operation!\n");
			return 1; // Exit with error code
			
	}

	// Display the result
	printf("\nResult = %.2lf\n", result);

	return 0;

}
