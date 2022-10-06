//반환값이 있는 경우

#include <stdio.h>

int bin(int x) {
	if (x == 1) return 1;
	if (x % 2 == 1) return bin(x / 2) * 10 + 1;
	else return bin(x / 2) * 10;
}

int main() {
	int num;
	printf("Please enter a number : ");
	scanf("%d", &num);
	printf("%d", bin(num));
}