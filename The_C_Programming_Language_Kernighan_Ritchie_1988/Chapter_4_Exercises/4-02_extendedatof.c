#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAXLINE 100

int getlin (char s[], int lim);
int atoi (char s[]);
double atof (char s[]);

/* rudimentary calculator */
int main() {
  double sum, atof(char []);
  char line[MAXLINE];
  int getlin(char line[], int max);

  sum = 0;
  while (getlin(line, MAXLINE) > 0)
    printf("\t%g\n", sum += atof(line));
  return 0;
}

int getlin (char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

/* atoi: convert string s to integer using atof */
int atoi (char s[]) {
    double atof (char s[]);

    return (int) atof(s);
} // atoi

/* atof: convert string s to double */
double atof (char s[]) {
    double val, power;
    int i, sign, e_val, e_sign;

    for (i = 0; isspace(s[i]); i++) /* skip white space */
        ;
    sign = (s[i] == '-') ? -1 : 1; // gets sign of number
    if (s[i] == '+' || s[i] == '-')
      i++;                         // moves past sign
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    if (s[i] == 'e' || s[i] == 'E') {
      i++;
      e_sign = (s[i] == '-') ? -1 : 1;
      if (s[i] == '+' || s[i] == '-')
	i++;
      for (e_val = 0; isdigit(s[i]); i++) {
	e_val = 10 * e_val + (s[i] - '0');
      }
      val *= pow(10, e_sign * e_val);
    }
    return sign * (val / power);
} // atof
