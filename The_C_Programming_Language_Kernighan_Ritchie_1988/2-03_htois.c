#include <stdio.h>
#include <ctype.h>

/* Converts a string of hexadecimal digits into its 
 * equivalent integer value */
int main(){

    char str1[255];     // Input string

    printf("Enter a character: ");
    scanf("%s", str1);
    printf("You entered %s\n", str1);
    
    int i, n;

    n = 0;
    for (int i = 0; (str1[i] >= '0' && str1[i] <= '9') ||
		    (str1[i] >= 'A' && str1[i] <= 'F') ||
		    (str1[i] >= 'a' && str1[i] <= 'f'); i++) {
        if (isdigit(str1[i])) 
	    n = 16 * n + (str1[i] - '0');
	else {
	    str1[i] = toupper(str1[i]);
	    n = 16 * n + (str1[i] - '7');
	}
    }

    printf("Your converted string is %d", n);

    return 0;
}
