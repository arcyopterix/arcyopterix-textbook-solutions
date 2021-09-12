#include <stdio.h>
#include <string.h>

char s[255];

void itoa(signed int n, char str[]);
void reverse(char str[]);

int main() {

    int n;

    n = -65536;
    itoa(n, s);

    return 0;
} // main

/* itoa: convert n to characters in s */
void itoa(signed int n, char str[]) {
    int i, sign;

    if ((sign = n) < 0)
        n = -n;
    i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
    printf("%s", s);
} // itoa

/* reverse: reverse string s in place */
void reverse(char str[]) {
    int c, i, j;

    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
} // reverse
