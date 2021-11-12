#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='H')
        {
          c=1;
          break;
        }
        if(s[i]=='Q')
        {
          c=1;
          break;
        }
        if(s[i]=='9')
        {
          c=1;
          break;
        }
    }

    if(c)
    {
       cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    cout<<(c)?"YES":"NO";
}
