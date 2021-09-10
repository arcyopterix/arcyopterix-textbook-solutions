#include <stdio.h>

#define  UPPER   1000

void entab(char line[], int index);

int main() {

    int c, index;
    char line[UPPER];
    
    index = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            entab(line, index);
            index = 0;
        }
        else {
            line[index] = c;
            index++;
        }
    }
    
}

void entab(char line[], int index) {

    for (int i = 0; i < index; i++) {
        if ((line[i] == ' ') &&
            (line[i+1] == ' ') &&
            (line[i+2] == ' ')) {
            putchar('\t');
            i = i + 2;
        }
        else
            putchar(line[i]);
    }
    printf("%c", '\n');

}
