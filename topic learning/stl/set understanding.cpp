#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>myset;

    //insertion
    myset.insert(4);
    myset.insert(4);
    myset.insert(5);
    myset.insert(4);
    myset.insert(1);

    set<int>::iterator itr;


    for(itr = myset.begin(); itr!= myset.end(); itr++)
    {
        cout << *itr << endl; // notice the '*' (asterisk)

    }
    auto pos = myset.find(10); // find returns a position
    cout<< *pos << endl;
    return 0;
}
