#include <stdio.h>

/* copy input to output; 2nd version */
main() {
    int c;
    printf("EOF = %d\n", EOF);

    while ((c = getchar()) != EOF) {
	putchar(c);
	printf("c = %d\n", c);
	printf("(c != EOF) == %d\n", c != EOF);
    }
}
