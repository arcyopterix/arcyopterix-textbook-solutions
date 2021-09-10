#include <stdio.h>
#include <string.h>

#define  lim   1000     // Used to set char array size

int main() {

    int c;
    char s[lim];

    for (int i=0; (c=getchar()) != EOF; i++) {
        if (!i < lim-1)
            if (c != '\n')
                s[i] = c;
    }
    printf("My string is %s\n", s);

}
