#include<stdio.h>
/*
Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more
blanks by a single blank.
*/
int main (int argc, char *argv[])
{
    int c;
    int bcnt=0; // blank count
    while ((c=getchar())!=EOF)
    {
        if (c==' ')
        bcnt++;
        else bcnt=0;
        if(bcnt<2)
        putchar(c);
    }       
    return 0;
}