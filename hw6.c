#include <stdio.h>

int main() {
	int arr[5];
	printf("Please input five integers : ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Odd numbers :");
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 1) {
			printf(" %d", arr[i]);
		}
	}
	printf("\n");
	printf("Even numbers :");
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0) {
			printf(" %d", arr[i]);
		}
	}
}