#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char p;
    string s;

    cin>>a>>b>>s;
    while(b--)
    {
        for(int i =0; i<a; i++)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                p=s[i+1];
                s[i+1]=s[i];
                s[i]=p;
                i++;
            }
        }
    }

    cout<<s<<endl;
}

