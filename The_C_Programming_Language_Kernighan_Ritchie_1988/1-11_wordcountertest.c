#include <stdio.h>

#define   IN    1    /* inside a word */
#define   OUT   0    /* outside a word */


/* count lines, words, and characters in input */
/* Inputs liable to produce bugs would be unusual 
 * expressions such as Math expressions, formatting
 * (i.e. extended ellipses in a receipt), and
 * other non-words which may accidentally register
 * as a word */
main() {
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
	if (c == '\n')
	    ++nl;
	if (c == ' ' || c == '\n' || c == '\t') {
	    state = OUT;
	    printf("\n");
	}
	else if (state == OUT) {
	    state = IN;
	    ++nw;
	    putchar(c);
	}
	else {
	    putchar(c);
	}
    }
    printf("%d %d %d\n", nl, nw, nc);
}

