#include <stdio.h>
#define MAXLINE 1000

int strrindex(char source[], char searchfor[]);

char pattern[] = "ould";

int main() {

    char sentence[] = "I would if I could.";
    printf("strrindex(pattern, sentence) = %d", strrindex(sentence, pattern));

    return 0;
}

/* strrindex: return rightmost occurrence of t in s, -1 if none */
int strrindex(char arr1[], char arr2[]) {
  int i, j, k, index;

    for (i = 0; arr1[i] != '\0'; i++) {
      //printf("i = %d", i);
        for (j=i, k=0; arr2[k] != '\0' && arr1[j]==arr2[k]; j++, k++)
            ;
        if (k > 0 && arr2[k] == '\0') // adds k if match found
	  index = i;
    }
    if (index != 0)
      return index;
    else
      return -1;
} // strindex
