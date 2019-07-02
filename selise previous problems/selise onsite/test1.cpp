#include<bits/stdc++.h>
using namespace std;

int strl(char s[]);
int main()
{
    char s[100];

    gets(s);
    printf("%d", strl(s));


    return 0;
}


int strl(char s[])
{
    int i =0;
    while(s[i]!='\0')
    {
        i++;
    }
    return i;
}
