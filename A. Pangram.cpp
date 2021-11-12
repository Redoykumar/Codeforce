#include<bits/stdc++.h>
using namespace std;
int main()
{
    set <char> c;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i =0;i<n;i++)
    {
        c.insert(tolower((char)s[i]));
    }
    if(c.size()==26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
