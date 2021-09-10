#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

/* Program that takes in n bits from the right side of y and places it in
 * x from the point p, leaving the other bits unchanged, then returns x */
int main() {

    unsigned int x = 0xF995; // In decimal, 63893 
                             // In binary, 1111100110010101
    unsigned int y = 0x0033; // In decimal, 51
                             // In binary, 0000000000110011

    // getbits test
    int z = setbits(x, 4, 4, y);
    printf("setbits(x, 4, 4, y) = %u", z);

    return 0;
}

unsigned int setbits(unsigned int x, int p, int n, unsigned int y) {
    int bits = y & ~(~0 << n);  // Takes out n-length bit segment from y
    int temp = x & ~(~0 << (p + 1 - n));  // Saves lowest n digits of x to temp
    x = x >> p + 1;  // Clears rightmost digits of x to facilitate 
    x = x << p + 1;  // setting the bits
    x = (x >> (p + 1 - n)) | bits;  // Setting the bits in x
    x = (x << (p + 1 -n)) | temp;   // Restoring the rightmost digits
    return x;
}
