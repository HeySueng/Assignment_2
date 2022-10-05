#include <stdio.h>
#include <string.h>

int main(void) {
	while (1) {
		char string[100];
		gets(string);
		if (!strcmp(string,"exit")) {
			break;
		}
		puts(string);
	}

	return 0;
}