#include <stdio.h>
#include <string.h>

int main(void) {
	char string[1000];
	scanf("%s", string);
	int length = strlen(string);
	int i;
	for (i = 0; i < length / 2; i++) {
		if (string[i] == string[length - 1 - i])
			continue;
		else
			break;
	}
	if (i == length / 2)
		puts("Yes");
	else
		puts("No");
	return 0;
}