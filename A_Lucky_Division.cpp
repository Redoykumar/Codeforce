#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,f=1;
    string s;
    stringstream p;
    cin>>a;
    p<<a;
    p>>s;
    for(int i =0; i<s.length(); i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {

        }
        else
        {
            f=0;
            break;
        }
    }
    if(f)
    {
        cout<<"YES"<<endl;
    }
    else if(a%4==0||a%7==0||a%47==0)
    {
        cout<<"YES"<<endl;

    }
    else
    {
        cout<<"NO"<<endl;
    }
}
