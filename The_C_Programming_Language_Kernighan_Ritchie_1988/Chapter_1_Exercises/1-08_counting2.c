#include <stdio.h>

/* count lines in input; version 2 */
main() {
    int c, blank, tab, nl;

    blank = 0;
    tab = 0;
    nl = 0;
    while ((c = getchar()) != EOF) {
	if (c == ' ')
	    ++blank;
	if (c == '\t')
	    ++tab;
	if (c == '\n')
	    ++nl;
    }
    printf("blank: %d\ntab: %d\nnew line: %d\n", blank, tab, nl);
}
