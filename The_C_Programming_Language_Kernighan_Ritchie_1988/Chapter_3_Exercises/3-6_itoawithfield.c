#include <stdio.h>
#include <string.h>

void itoa(int n, char s[], int b);
void reverse(char str[]); 

char s[255];

int main() {

    int n = 230;
    printf("n = %d\n", n);
    itoa(n, s, 8);

    return 0;
} // main

/* itoa: convert n to characters with minimum field width b */
void itoa(int n, char str[], int b) {
    int i, sign;

    if ((sign = n) < 0)
        n = -n;
    i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    while (strlen(s) < b)
        s[i++] = '0'; 
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

