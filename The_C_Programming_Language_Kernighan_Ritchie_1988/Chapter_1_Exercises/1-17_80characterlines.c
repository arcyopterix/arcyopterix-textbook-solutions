#include <stdio.h>

#define   UPPER   1000    /* defines upper limit for array length */

int main() {

    int c, length;              /* length counts # of characters in a line */
    int index;                  /* records index of outputlines array */
    char currentline[UPPER];    /* this array stores the current line */
    char outputlines[UPPER];    /* this array stores all lines longer than
			           80 characters */

    length = index = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n' && length > 80)
            index += copy(outputlines, currentline, index);
    }
}

/* Returns the new value of index */
int copy(char to[], char from[], int index){

    int i;

    i = 0;
    while ((to[index + i] = from[i]) != '\0') {
	    i++;
	    index++;
    }
    return index;
}

}
