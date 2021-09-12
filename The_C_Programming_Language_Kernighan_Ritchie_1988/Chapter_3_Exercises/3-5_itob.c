#include <stdio.h>
#include <string.h>

void itob(int n, char s[], int b);
void reverse(char s[]);

char s[255];

int main() {

    int n, b;

    n = 39;        // decimal integer
    b = 16;        // base 16
    itob(n, s, b);
    
} // main

/* itob: converts an integer n into a base b character 
 * representation in the string s; e.g. itob(n,s,16) 
 * formats n as a hexadecimal integer in s */
void itob(int n, char s[], int b) {

    int sign, i, j, num;
    num = n;
    if ((sign = n) < 0)
        n = -n;          // Changes n to positive if negative
    i = 0;
    do {
        j = n % b;       // Uses modulus on number by the base
        s[i++] = (j <= 9) ? j + '0' : j + 'a' - 10;
    } while ((n /= b) > 0); // j > 10 converts to hex

    if (sign < 0)       // Adds negative sign back in
        s[i++] = '-';
    reverse(s);
    
    printf("%d converted to base %d = %s", num, b, s);

} // itob

/* reverse: reverses a character array */
void reverse(char s[]) {
    int c, i, j;

    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
