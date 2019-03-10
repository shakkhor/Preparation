#include<bits/stdc++.h>

using namespace std;

char intToChar(int n)
{
    return n-0+'0';
}

int charToInt(char ch)
{
    return ch-'0'+0;
}

string addZero(int num)
{
    string str = "";
    for(int i=0;i<num;i++)
    {
        str += '0';
    }
    return str;
}

string sumOfTwoString(string str1,string str2)
{
    int ln1,ln2,carry=0;
    string str = "";

    if(str1.length()>str2.length())
    {
        string s = str1;
        str1 = str2;
        str2 = s;
    }

    ln1 = str1.length();
    ln2 = str2.length();
    int j = ln2-1;

    //cout<<ln1<<" "<<ln2<<endl;
    for(int i=ln1-1;i>=0;i--,j--)
    {
        int n = charToInt(str1[i])+charToInt(str2[j])+carry;
        str += intToChar(n%10);
        //cout<<n<<" "<<str<<" "<<charToInt(str1[i])<<endl;
        carry = n/10;
    }
    for(int i=j;i>=0;i--)
    {
        int n = charToInt(str2[i])+carry;
        str += intToChar(n%10);
        carry = n/10;
    }
    if(carry>0)
    {
        str += intToChar(carry);
    }
    reverse(str.begin(),str.end());

    ///cout<<"Sum of "<<str1<<"  and  "<<str2 <<"  is :  "<<str<<endl;

    return str;
}

string stringMultiply(string str1,string str2)
{
    int ln1,ln2,carry;
    string str,ans = "";

    if(str1.length()>str2.length())
    {
        string s = str1;
        str1 = str2;
        str2 = s;
    }

    ln1 = str1.length();
    ln2 = str2.length();

    int k = 0;

    for(int i=ln1-1;i>=0;i--)
    {
        carry = 0;
        str = "";
        for(int j=ln2-1;j>=0;j--)
        {
            int n = charToInt(str1[i])*charToInt(str2[j])+carry;
            str += intToChar(n%10);
            carry = n/10;
        }
        if(carry>0)
        {
            str += intToChar(carry);
        }
        reverse(str.begin(),str.end());
        str += addZero(k);
        k++;
        ans = sumOfTwoString(ans,str);
    }
    return ans;
}

int main(int args,char* argv[])
{
    string str1,str2,str;



    while(cin>>str1>>str2)
    {
        //cout<<sumOfTwoString(str1,str2)<<endl;
        str = stringMultiply(str1,str2);
//        cout<<1+charToInt('3')<<endl;
//        cout<<intToChar(2)<<endl;
        cout<<str<<endl;
    }

    return 0;
}
