/*
Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
*/

#include <stdio.h>

main() {
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' '){
            putchar(c);
            while ((c = getchar()) == ' ' && c != EOF)
                ;
        }
        if (c == EOF)
            break;        
        putchar(c);
    }
}
