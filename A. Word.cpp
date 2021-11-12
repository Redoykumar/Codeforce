#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s;
    int c=0;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            c++;
        }
    }

    if(s.length()-c<=c)
    {
        for(int i=0; i<s.length(); i++)
        {
            cout<<(char)tolower(s[i]);
        }
    }
    else
    {
        for(int i=0; i<s.length(); i++)
        {
            cout<<(char)toupper(s[i]);
        }

    }
    cout<<endl;

}
