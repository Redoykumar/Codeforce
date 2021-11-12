#include<bits/stdc++.h>
using namespace std;
int main()
{
    set <char> c;
    while(1)
    {
        string s;
        cin>>s;
        if(s[0]>='a'&&s[0]<='z')
        {
            c.insert(s[0]);
        }
        else if(s[1]>='a'&&s[1]<='z')
        {
             c.insert(s[1]);
        }
        if(s[1]=='}'||s[2]=='}')
        {
            break;
        }
    }
    cout<<c.size()<<endl;
}
