#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s;
    int t=0,t1=0,f=0;
    cin>>s;
    for(int i =0 ; i<s.length(); i++)
    {
        if(s[i]=='0')
        {
            t1=0;
            t++;
            if(t==7)
            {
                f=1;
            }
        }
        else if(s[i]=='1')
        {
            t=0;
            t1++;
            if(t1==7)
            {
                f=1;
            }


        }
    }
    if(f==1)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;


}
