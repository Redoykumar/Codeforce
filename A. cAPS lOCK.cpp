#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c =0,d=0;
    string s;
    cin>>s;
    for(int i =0; i<s.size(); i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            c++;
        }
        if(s[0]>='a'&&s[0]<='z')
        {
            d=1;
        }
    }
    if(c==s.size())
    {
        for(int i =0 ; i<s.size(); i++)
        {
            cout<<(char)tolower(s[i]);
        }
    }
    else if(c==s.size()-1&&d==1)
    {
        for(int i =0 ; i<s.size(); i++)
        {
            if(i==0)
            {
                cout<<(char)toupper(s[i]);
            }
            else
            cout<<(char)tolower(s[i]);
        }
    }
    else
    {
        cout<<s;
    }
    cout<<endl;
}
