#include <stdio.h>
#include <string.h>

void escape1();
void escape2();

int main() {

    int c;

    printf("Type 1 to convert real characters to escape sequences;\n");
    printf("Type 2 to convert escape sequences to real characters:\n");
    scanf("%d", &c);
    if (c == 1)
        escape1();
    else if (c == 2)
        escape2();
    else
        printf("Nonsense input; Try again");
    
    return 0;
} // main

void escape1() {

    char t[255] = "Testing \t one \n two \t three";
    char s[255];
    int i, j;
    size_t length = strlen(t);

    printf("Input string is 'Testing \t one \n two \t three'\n");
    for (i = j = 0; t[i] != '\0'; i++) {
    
        switch (t[i]) {
        case '\n':
            s[j++] = '\\';
            s[j++] = 'n';
            break;
        case '\t':
            s[j++] = '\\';
            s[j++] = 't';
            break;
        default:
            s[j++] = t[i];
            break;
        }
    }
    s[j] = '\0';
    printf("New string is: %s\n", s);


} // escape1

void escape2() {

    char t[255] = "Testing \\t one \\n two \\t three";
    char s[255];
    int i, j;

    printf("Input string is 'Testing \\t one \\n two \\t three'\n");
    for (i = j = 0; t[i] != '\0'; i++) {
        if (t[i] == '\\') {
            switch (t[i+1]) {
            case 'n':
                s[j++] = '\n';
                i++;
                break;
            case 't':
                s[j++] = '\t';
                i++;
                break;
            default:
                break;
            }
        }
        else
            s[j++] = t[i];
    }
    s[j] = '\0';
    printf("New string is: %s\n", s);

} // escape2
