#include <stdio.h>

void expand(char s1[], char s2[]);

int main() {

    char s1[255], s2[255];

    printf("Enter string: ");
    fgets(s1, 255, stdin);
    expand(s1, s2);

    return 0;
} // main

/* expand: Expands shorthand notations like a-z to a full string
 * e.g. abc...zyz */
void expand(char s1[], char s2[]) {

    char numbers[10] = "0123456789";
    char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
    int i, j;

    for (i = j = 0; s1[i] != '\0'; i++) {
        if (s1[i] == 'a' && s1[i+1] == '-') {    // Letters case
            switch (s1[i+2]) {
            case 'b':
                for (int a = 0; a < 26; a++) {
                    if (a < 25)
                        s2[j++] = alphabet[a], s2[j++] = '-'; 
                    else
                        s2[j++] = alphabet[a];
                    i += 3; 
                }
                break;
            case 'z':
                for (int a = 0; a < 26; a++) {
                    s2[j++] = alphabet[a];
                }
                i += 3; // Moves index past -z in original string
                break;
            default:
                break;
            }
        }
        if (s1[i] == '0' && s1[i+1] == '-') {     // Numbers case
            for (int a = 0; a < 10; a++) {
                s2[j++] = numbers[a];
            }
            i += 2; // Moves index past -9 in original string
        }
        else
            s2[j++] = s1[i];
    }
    
    printf("%s", s2);

} // expand
