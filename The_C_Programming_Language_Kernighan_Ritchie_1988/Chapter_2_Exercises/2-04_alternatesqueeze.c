#include <stdio.h>

/* Alternate version of squeeze program that deletes each
 * character in s1 that matches any character in the 
 * string s2 */
int main(){

    char s1[255], s2[255];

    printf("Please enter string to be modified: ");
    scanf("%s", s1);
    printf("Please enter modifying string: ");
    scanf("%s", s2);
    
    int i, j;   // integers used for indexing
    int add;    // 1 if index does not contain s2 match
                // 0 otherwise

    for (i = j = 0; s1[i] != '\0'; i++) {
	add = 1;
        for (int k = 0; s2[k] != '\0'; k++) { // Compares every entry in s1 to every entry in
	    if (s1[i] == s2[k]) {             // s2 to check for matches and adds back to s1
	        add = 0;                      // only if no matches are found for s1 == s2
	    }
	}
        if (add == 1) {
            s1[j++] = s1[i];
	}
    }
    s1[j] = '\0';

    printf("Your modified string is %s", s1);

    return 0;
}
