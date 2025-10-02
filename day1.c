#include <stdio.h>

int main (){
	printf("My name is Nkole Emmanuel.\n");
	printf("I am 24 years old.\n");
	printf("My favourite hobby is gaming.\n");

	char userName[50];
	int userAge;

	printf("What is your name? ");
	scanf("%s", userName);

	printf("What is your age? ");
	scanf("%d", &userAge);

	printf("Hello, %s! You are %d years old.\n", userName, userAge);

	return 0;

}
