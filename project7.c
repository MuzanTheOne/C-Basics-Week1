#include <stdio.h>

int main (){
	int num1, num2, num3;

	//Get input from user
	printf("Enter three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	//Find the largest number
	int largest = num1;

	if (num2 > largest) {
		largest = num2;
	}

	if (num3 > largest) {
		largest = num3;

	}

	// Show the result
	printf("The largest number is %d\n", largest);

	return 0;

}
