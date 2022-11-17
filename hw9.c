#include <stdio.h>
#include <string.h>

int convCase(char* ch) {
	const int diff = 'a' - 'A';
	int len = strlen(ch);
	for (int i = 0; i < len; i++) {
		if (ch[i] == EOF) {
			break;
		}
		if (ch[i] >= 'A' && ch[i] <= 'Z')
			ch[i] += diff;
		else if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] -= diff;
	}
	printf("Output> ");
	fputs(ch, stdout);
}

int main() {
	char ch[1000];
	
	printf("Input> ");
	fgets(ch, sizeof(ch), stdin);

	convCase(ch);
}