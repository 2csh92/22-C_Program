#include <stdio.h>

struct city
{
	char name[20];
	char ctr[20];
	int pop;
};

int main() {
	struct city arr[3];
	printf("Input three cities:\n");
	for (int i = 0; i < 3; i++) {
		printf("Name> ");
		scanf("%[^\n]s", arr[i].name, sizeof(arr[i].name));
		getchar();
		printf("Country> ");
		scanf("%[^\n]s", arr[i].ctr, sizeof(arr[i].ctr));
		printf("Population> ");
		scanf("%d", &arr[i].pop);
		getchar();
	}
	printf("\nPrinting the three cities:\n");
	for (int i = 0; i < 3; i++) {
		printf("%d. %s in %s with a population of %d people\n", i + 1, arr[i].name, arr[i].ctr, arr[i].pop);
	}
}