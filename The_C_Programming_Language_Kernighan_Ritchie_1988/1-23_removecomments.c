#include <stdio.h>

#define  IN      1
#define  OUT     0
#define  UPPER   1000

void scanForComments(char line[], int index);

int main() {

    int c, index;
    char line[UPPER];

    index = 0;
    while ((c = getchar()) != EOF) {

        if (c != '\n') {
            line[index] = c;
            index++;
        }
        else {
            scanForComments(line, index);
            index = 0;
        }
    }
}

void scanForComments(char line[], int index) {

    int multiLineComment = OUT;
    int singleLineComment = OUT;
    
    for (int i = 0; i < index; i++) {
        // Handles single-line comments
        if (line[i-1] == '\n')
            singleLineComment = OUT;
        if (line[i] == '/' && line[i + 1] == '/') 
            singleLineComment = IN;
        
        // Handles multi-line comments
        if (line[i] == '/' && line[i + 1] == '*') {
            multiLineComment = IN;
        }
        if (line[i - 2] == '*' && line[i - 1] == '/') {
            multiLineComment = OUT;
        }

        // Prints char if neither type of comment is active
        if (multiLineComment == OUT && singleLineComment == OUT) {
            putchar(line[i]);
        }
    }
    printf("%c", '\n');

}
