#include <stdio.h>
#include <math.h>

double sd(int* num) {
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += num[i];
	}
	double avg = sum / 5, mrs = 0, rs = 0;
	for (int i = 0; i < 5; i++) {
		mrs += pow(num[i] - avg, 2);
	}
	rs = sqrt(mrs / 5);
	return rs;
}

int main() {
	int arr[5];
	printf("Enter 5 real numbers : ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Standard Deviation = %.3f", sd(arr));
}