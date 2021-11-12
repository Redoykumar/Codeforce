#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,g=0 ;
    cin>>n;
    n-=1;
    char c,s;
    cin>>c;
    while(n--)
    {
        cin>>s;
        if(c==s)
        {
            g++;
        }
        c=s;


    }
    cout<<g<<endl;

}

