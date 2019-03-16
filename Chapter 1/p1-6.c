/*
Verify that the expression getchar() != EOF is 0 or 1.
*/

#include<stdio.h>
main()
{
    int c;
    c = getchar() != EOF;
    if (c==0)
        printf("0\n");
    else if  (c == 1)
        printf("1\n");
    else
        printf("error\n");
}
