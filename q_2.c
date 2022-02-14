/*Given a file containing strings separated by space, where the first string is "child" and second
string is "Father".
Write a program which finds number of grandchildren for any given string.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    FILE *fp;
    int i,j,len,count=0;
    char ch;
    char a[20][10] = {'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'};
    char buf[10],in[10],child[10];
    fp=fopen("file.txt","r");
    i = 0;
    j=0;
    ch = getc(fp);
    while (ch !=EOF)
    {
        if(ch == ' ' || ch == '\n')
        {
            j=0;
            i++;
            ch = getc(fp);
            continue;
        }
        a[i][j] = ch;
        j++;
        ch = getc(fp);
    }
    len = i;
    for(i=0;i<=len;i++)
    {
        strcpy(buf,a[i]);
        printf("%s ", buf);
        printf("\n");
    }
    printf("Enter a string:- ");
    gets(in);
    for(i=1;i<=len;i=i+2)
    {
        if(strcmp(a[i], in) == 0)
        {
            strcpy(child,a[i-1]);
            break;
        }
    }
    if(i>len)
    {
        printf("Not Found \n");
    }
    for(i=0;i<=len;i=i+2)
    {
        if(strcmp(a[i], child) == 0)
        {
            count++;
        }
    }
    printf("\n");
    else
    {
        printf("Number of grandchild is %d\n",count);
    }
    fclose(fp);
}

