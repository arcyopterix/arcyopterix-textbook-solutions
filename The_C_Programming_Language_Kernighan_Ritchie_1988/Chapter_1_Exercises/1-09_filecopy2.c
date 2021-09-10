#include <stdio.h>

int main() {

    int c, counter;

    while ((c = getchar()) != EOF) {
	if (c == ' ' && counter == 0) {
		putchar(c);
		counter++;
	}
	if (c != ' ') {
		putchar(c);
		counter = 0;
	}

    }
}
