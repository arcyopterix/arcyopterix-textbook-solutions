#include <stdio.h>

/* Returns the first location in the string s1 where any character from 
 * the string s2 occurs, or -1 if s1 has no characters from s2. */
int main() {

    char s1[255], s2[255];
    int index;  // Records the index in s1 where a match is found
    int found;  // Records whether or not a match has been found
                // Initializes to 0 and becomes 1 if there is a match
    printf("Please enter the string that will be searched through: ");
    scanf("%s", s1);
    printf("Please enter the set of characters you are searching for: ");
    scanf("%s", s2);

    found = 0;
    for (int i = 0; s1[i] != '\0'; i++) {
        for (int j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j] && index == 0) { // Checks for first incidence
                found = 1;                      // i.e. ignores repeats
		index = i;
	    }
	}
    }

    if (found)
        printf("First incidence occurs at index %d in the string", index);
        // Return index
    else
        printf("No match between sets detected");
	// Return -1
    return 0;
}
