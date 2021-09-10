#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main() {

    unsigned int x;   // Integer with bits to be inverted
    int p;  // Index of position in x where inversion begins
    int n;  // Number of digits in x to be inverted
    printf("Enter a positive integer: ");
    scanf("%d", &x);
    printf("Enter the position in x where the inversion begins: ");
    scanf("%d", &p);
    printf("Enter the number of digits in x to be inverted: ");
    scanf("%d", &n);
    printf("invert(%d, %d, %d) = %d\n", x, p, n, invert(x, p, n));
    return 0;
}

/* Returns x with the n bits beginning at position p inverted
 * (1 changed into 0 and vice versa) leaving the rest unchaged */
unsigned int invert(unsigned int x, int p, int n) {
    
    // Storing rightmost values of x before inverting bits
    int temp = x & ~(~0 << (p + 1 - n));
    x = x >> (p + 1 - n);          // Shifting x right to invert bits
    x = x ^ ~(~0 << (p + 1 - n));  // Inverting bits
    x = (x << (p + 1 - n)) | temp; // Restoring original digits to x
    return x;
}
