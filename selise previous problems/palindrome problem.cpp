#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];

    gets(s);

    int l = strlen(s);
    int trace[30]={0};

    for(int i =0; i<l ; i++)
    {
        int x = s[i]-97;
        trace[x]++;
    }

    int odd =0, even =0;

    for(int i =0; i<26; i++)
    {
        if(trace[i]%2==0 && trace!=0) even++;
        else if(trace[i]%2==1) odd++;

    }

    if(odd==0 || odd==1) printf("YES\n");
    else printf("NO\n");


    return 0;
}
