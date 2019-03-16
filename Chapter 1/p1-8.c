/*
Write a program to count blanks, tabs, and newlines.
*/
#include <stdio.h>

main()
{
    int c, nspace, ntab, nline;
    nspace = 0;
    ntab = 0;
    nline = 0;

    while ((c = getchar()) != EOF)
        if (c == ' ')
            ++nspace;
        else if(c == '\t')
            ++ntab;
        else if (c == '\n')
            ++nline;
        else
            continue;
    printf("space: %d, tab: %d, line: %d\n",nspace, ntab, nline);
}
