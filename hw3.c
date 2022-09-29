#include <stdio.h>

int main() {
	for (int i = 1; i < 6; i++) {
		for (int j = i; j < 5; j++) {
			printf(" ");
		}
		for (int j = 1; j < 2 * i; j++) {
			printf("*");
		}
		printf("\n");
	}
}