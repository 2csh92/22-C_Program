//반환값이 없는 경우

#include <stdio.h>

int bin(int x) {
	if (x == 1) return printf("1");
	bin(x / 2);
	if (x % 2 == 1) printf("1");
	else printf("0");
}

int main() {
	int num;
	printf("Please enter a number : ");
	scanf("%d", &num);
	bin(num);
}