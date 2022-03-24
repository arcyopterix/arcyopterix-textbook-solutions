#include <stdio.h>

int binsearch(int x, int v[], int n);

/* Program that performs a binary search on an array
 * Using one if-else test inside the loop and one
 * Outside the loop. */
int main() {

    int v[9] = {0, 2, 3, 7, 8, 10, 15, 19, 22};

    printf("binsearch(8) = %d", binsearch(8, v, 9));
    

    return 0;
} // main

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n) {

    int low, high, mid;

    low = 0;
    high = n - 1;

    mid = (low + high) / 2;

    while (low < high && x != v[mid]) {
	if (x > v[mid])
	    low = mid + 1;
        else    
	    high = mid - 1;
        mid = (low + high) / 2;	
    }
    if (x == v[mid])
        return mid; /* answer found */
    else
        return -1;  /* no match */

} // binsearch
