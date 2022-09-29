#include <stdio.h>

int main() {
	float km, mile;
	printf("Please enter kilometers : ");
	scanf("%f", &km);
	
	mile = km / 1.609;

	printf("%.1f km is equal to %.1f miles", km, mile);
}