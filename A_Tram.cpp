#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,s=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a,b;
        cin>>a>>b;
        s-=a;
        s+=b;
        if(i==0)
        {
            m=s;
        }
        if(m<s)
        {
            m=s;
        }

    }
    cout<<m<<endl;

}

