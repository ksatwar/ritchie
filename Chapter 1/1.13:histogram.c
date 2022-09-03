/*Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is easy
to draw the histogram with the bars horizontal; a vertical orientation is more challenging.*/
#include<stdio.h>
int main(int argc,char* argv[])
{
    int x,word_length=0,count=0;
    int histogram[30]; //keeping it real
    for (int i=0;i<30;i++)
    {
        histogram[i]=0;
    }
    // my thought process here is that a word is defined by the presence of a white space. I have only counted till a maximum of 10 words
    while(((x=getchar())!=(EOF))&&count<11)
    {
        if (x==' '||x=='\n'||x=='\r')
        {
            histogram[word_length]++;
            word_length=0;
            count++;
        }
        else
        word_length++;//else is compulsarily required because we have to classify whether it is a space or not and only then count words
    }
    //example string:my name is kabir singh waraich this is pop os linux
    for (int i=0;i<30;i++)
    {
        //printf("%d ",histogram[i]);
        for (int j=0;j<30;j++)
        {if ((30-histogram[j])>0)
        {
            printf(" - ");
        }
        else 
        {
            printf(" * ");
        }
        histogram[j]++;//took me about 30 minutes at 0300 am to figure it out
        }
        printf("\n");
    }
    int xw;
    return 0;
}