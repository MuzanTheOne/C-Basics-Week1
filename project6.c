#include <stdio.h>

int main() {
	int number;

	// Get input from user
	printf("Enter a number: ");
	scanf("%d", &number);

	// Checking if the number is even or odd
	if (number % 2 == 0) {
		printf("%d is Even\n", number);
	} else {
		printf("%d is odd\n", number);
	}

	return 0;

}
