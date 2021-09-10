#include <stdio.h>

int main() {
    int c;

    c = getchar();
    if ((c != EOF) == 0) 
	   printf("getchar() != EOF equals zero\n");
    else if ((c != EOF) == 1)
	   printf("getchar() != EOF equals one\n");
    else
	   printf("getchar() != EOF equals neither zero nor one\n");
} 
