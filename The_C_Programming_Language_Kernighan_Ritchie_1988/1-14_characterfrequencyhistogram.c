#include <stdio.h>

#define    IN   1    /* a word is currently being processed */
#define    OUT  0    /* no word is being processed i.e. blank */

int main() {

    int c, state;
    int nblanks;
    int ndigits[10];
    int nchars;

    nblanks = nchars = 0;
    for (int i = 0; i < 10; i++)
	ndigits[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ndigits[c-'0']++;
	else if (c == ' ' || c == '\t' || c == '\n') 
	    nblanks++;
	else
	    nchars++;
    }

    printf("Number of blanks: ");
    for (int i = 0; i < nblanks; i++)
	    printf("X");
    printf("\n");
    printf("Number of chars: ");
    for (int i = 0; i < nchars; i++)
	    printf("X");
    printf("\n");
    for (int i = 0; i < 10; i++) {
	printf("Number of %ds: ", i);
        for (int j = 0; j < ndigits[i]; j++)
	    printf("X");
        printf("\n");
    }
}
