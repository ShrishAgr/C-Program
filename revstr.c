#include <stdio.h>
#include <string.h>
int main()
{
    char s,s1="",s2="";
    int i,t;
    printf("Enter String");
    scanf("%c", &s);
    t=strlen(s);
    for(i=0;i<t;i++)
    {
        char x=s[i];
        if(x==' ')
        {
            s1=s1+x;
        }
        else
        {
            s2=s1+s2;
            s2=" "+s2;
            s1="";
        }
    }
    printf("Reverse of string is%c",s2);
}
