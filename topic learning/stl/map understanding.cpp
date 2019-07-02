#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mymap;

    mymap.insert(pair<int,int>(1,2));
    mymap.insert(pair<int,int>(11,22));
    mymap.insert(pair<int,int>(33,333));
    mymap.insert(pair<int,int>(44,444));

    map<int,int>::iterator itr;

    for(itr= mymap.begin(); itr!=mymap.end(); itr++)
    {
        int temp = itr->first, antemp = itr->second;

        printf("%d %d\n",temp,antemp);

    }


    return 0;
}
