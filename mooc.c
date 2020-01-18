// #include<stdio.h>
// int main()
// {
//     printf("%c",'b'-'a'+'A');
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

int main()
{
    int i=0;
    char s[100]={0};
    strcpy (s,"abcd");
    //printf("%d",++i);
    //printf("%c",s[++i]);
    
    putchar(TOUPPER(s[++i]));   //每一次++i后i都发生了变化
    return 0;
}