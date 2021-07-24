#include <stdio.h>

#define  TABLENGTH   3

/* Replaces all tabs in a program
   with a combination of spaces
   equal to the tab length */
int main() {

    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t')
            for (int i = 0; i < TABLENGTH; i++)
                putchar(' ');
        else
            putchar(c);
    }
}
