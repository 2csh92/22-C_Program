#include <stdio.h>

int main() {
	int a, flag = 1;
	printf("Please enter a number : ");
	scanf("%d", &a);
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			flag = 0;
		}
	}
	if (flag)
		printf("It is a prime number.");
	else
		printf("It is not a prime number.");
}