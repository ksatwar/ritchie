#include <stdio.h>
int main(int argc, char *argv[])
{
int c;
c = (getchar() != EOF);
printf("%d",c);
    return 0;
}