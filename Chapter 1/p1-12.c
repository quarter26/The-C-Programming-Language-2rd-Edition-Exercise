/*
Write a program that prints its input one word per line.
*/

#include <stdio.h>
#include <ctype.h>

#define	IN	1
#define OUT	0

main()
{
    int c, state;
    state = OUT;

    while ((c = getchar()) != EOF) {
        if (isalnum(c)) {
            putchar(c);
            state = IN;
        }
        else if (state == IN) {
            printf("\n");
            state = OUT;
        }
    }
}
