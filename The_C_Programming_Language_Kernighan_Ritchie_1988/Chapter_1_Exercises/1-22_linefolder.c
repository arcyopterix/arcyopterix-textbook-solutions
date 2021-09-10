#include <stdio.h>

#define  FOLDCOLUMN   36

int main() {

    int c, index;
    char line[36];
    
    index = 0;
    while ((c = getchar()) != EOF) {

        line[index] = c;
        if (index == 36)
            for (
        if (c == '\n')
            index = 0;
        index++;
    }


}
