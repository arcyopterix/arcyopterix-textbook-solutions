#include <stdio.h>
#define MAXLINE 1000

int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

int main() {

    char sentence[] = "He could never do that.";
    printf("strindex(pattern, sentence) = %d", pattern, sentence);

    return 0;
}

/* strindex: return index of t in s, -1 if none */
int strindex(char s[], char t[]) {
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++) {
        for (j=1, k=0, t[k] != '\0' && s[j] == t[k]; j++, k++);
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
} // strindex


    


}
