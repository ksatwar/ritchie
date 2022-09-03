#include<stdio.h>
#define max 300
#define min 0
#define step 20
void printcelsius()
{
  for (int i=min;i<=max;i+=step)
  {
    printf("%d %d\n",i,(((i*9)/5)+32));
  }
}
int main(int argc, char *argv[])
{   
    printcelsius();
    return 0;
}