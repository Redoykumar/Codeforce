#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int c=0,c1=0;
    string s,s1,m;
    cin>>s>>s1>>m;
    for(int i=0;i<s.size();i++)
    {
        c+=((int)s[i]/3)+5;
    }
    for(int i=0;i<s1.size();i++)
    {
        c+=((int)s1[i]/3)+5;
    }
    for(int i=0;i<m.size();i++)
    {
        c1+=((int)m[i]/3)+5;
    }

    if(c==c1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

