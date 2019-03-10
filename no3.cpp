#include<bits/stdc++.h>

using namespace std;

string addStr(int num)
{
    string str = "";
    for(int i=0; i<num; i++)
    {
        str += '_';
    }
    return str;
}

int main(int args,char* argv[])
{
    string str = "";
    int num,first,last;

    while(cin>>str>>num)
    {
        num = num-str.length();
        if(num&1)
        {
            first = num/2+1;
        }
        else
        {
            first = num/2;
        }
        last = num-first;
        str = addStr(first)+str+addStr(last);
        cout<<str<<endl;
    }
}
