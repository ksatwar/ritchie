#include <stdio.h>
#define MAXLINE 1000
/* maximum input line length */
int fetchline(char line[], int maxline);
int main()
{
int len;
/* current line length */
char line[MAXLINE];

while ((len = fetchline(line, MAXLINE)) > 0)
if (len > LIMIT ) 
{
printf("%s",line);
}
return 0;
}
/* fetchline: read a line into s, return length */
int fetchline(char s[],int lim)
{
int c, i;

for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
s[i] = c;
if (c == '\n') {
s[i] = c;
++i;
}
s[i] = '\0';
return i;
}