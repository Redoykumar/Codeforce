#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s ,s1;
    cin>>s>>s1;
    for(int i=0;i<s.length()||i<s1.length();i++)
    {
        if(i<s.length())
        {
        s[i]=tolower(s[i]);
        }
        if(i<s.length())
        {
        s1[i]=tolower(s1[i]);
        }


    }
    if(s==s1)
    {
    cout<<0<<endl;
    }
    else if(s<=s1)
    {
    cout<<-1<<endl;
    }
    else
    cout<<1<<endl;



}
