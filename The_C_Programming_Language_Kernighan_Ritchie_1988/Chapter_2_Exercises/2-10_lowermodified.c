#include <stdio.h>

int lower(int c);

/* Program that converts upper case letters to lower case
 * Using a conditional expression rather than if-else */
int main() {

    int letter;
    printf("Enter your letter: ");
    scanf("%c", &letter);
    printf("lower(%c) = %c", letter, lower(letter));

    return 0;
} // main

/* lower: convert c to lower case; ASCII only */
int lower(int c) {

    int a;

    a = (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
    return a;

} // lower
