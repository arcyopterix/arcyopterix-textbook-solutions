#include <stdio.h>

#define  IN     1
#define  OUT    0
#define  UPPER  1000

/* Removes blanks and tabs from input 
   and deletes entirely blank lines;
   Program also produces an output
   file called output.txt for testing */
int main() {

    int c, index, state;
    char blankspace[UPPER];
    FILE *out_file = fopen("/home/leute/C_Projects/output.txt", "w"); // Write file
    
    
    c = index = 0;
    state = IN;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            index = 0;
            putchar(c);
            fprintf(out_file, "%c", c);
        }
        else if ((state == IN) && (c == '\t' || c == ' ')) {
            state = OUT;
            blankspace[index] = c;
            index++;
        }
        else if ((state == OUT) && (c != '\t') && (c != ' ')) {
            for (int i = 0; i < index; i++) {
                putchar(blankspace[i]);
                fprintf(out_file, "%c", blankspace[i]);
            }
            state = IN;
            putchar(c);
            fprintf(out_file, "%c", c);
            index = 0;
        }
        else if (state == OUT) {
            blankspace[index] = c;
            index++;
        }
        else {                      /* if state == IN */
            putchar(c);
            fprintf(out_file, "%c", c);
        }
    }

}
