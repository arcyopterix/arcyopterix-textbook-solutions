#include <stdio.h>

int rightrot(int x, int n);
int findHighestBitIndex(int x);

/* Returns the value of the integer x rotated to the right
 * by n bit positions */
int main() {

    int a; // Integer value for the rotation
    int n; // Number of digits in a to be rotated

    printf("Please enter integer value to rotate: ");
    scanf("%d", &a);
    printf("Please enter number of digits to rotate: ");
    scanf("%d", &n);
    printf("The value of %d rotated by %d digits is %d", a, n, rightrot(a,n));

    return 0;
} // main

/* rightrot: returns the value of x rotated by n bit positions */
int rightrot(int x, int n) {

    int temp = x & ~(~0 << n); // Temporarily stores end bits
    printf("temp = %d", temp);
    temp = temp << (findHighestBitIndex(x) + 1 - n); // Shifts temp far left
    printf("temp = %d", temp);
    x = x >> n;  // Shift x by n digits to the right
    return temp | x; // Combines both variables for a full rotation

} // rightrot

// Finds the highest valued bit in x
int findHighestBitIndex(int x) {

    unsigned int v = x;
    unsigned r = 0;

    while (v >>= 1) {
        r++;
    }

    return r;
}
