#include <stdio.h>

int bitcount(signed x);

/* Faster version of the bitcount program utilizing two's complement.
 * In the two's complement system, x &= (x-1) deletes the rightmost 
 * 1-bit in x because subtracting 1 from x itself produces a number
 * that in binary is the same as x, but with the rightmost 1 being 
 * turned into a 0.*/
int main() {

    int a;

    printf("Enter value of integer: ");
    scanf("%d", &a);
    printf("bitcount(%d) = %d", a, bitcount(a));
    
    return 0;
} // main

// bitcount: count 1 bits in x
int bitcount(signed x) {
    int b;

    for (b = 0; x != 0; x &= (x-1)) {
        b++;
    }
    return b;

} // bitcount
