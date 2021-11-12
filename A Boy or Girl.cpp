#include<bits/stdc++.h>
#include<string.h>
using namespace std ;
int main()
{
    int p=0;
    string s;
    cin>>s;
    sort(&s[0],&s[s.length()]);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=s[i+1])
        {
        p++;
        }
    }

    if(!(p&1))
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }

}
