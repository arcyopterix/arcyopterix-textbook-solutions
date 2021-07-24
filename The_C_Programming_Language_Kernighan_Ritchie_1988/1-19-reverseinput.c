#include <stdio.h>

#define  UPPER  1000

int main() {

    int c, index;
    char line[UPPER];

    index = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            for (int i = index - 1; i >= 0; i--)
                putchar(line[i]);
            index = 0;
        }
        else {
            line[index] = c;
            index++;
        }
    }
}
