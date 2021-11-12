#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    int n,max,min,c=0;
    cin>>n;
    max=min=n;
    while(t--)
    {
        if(n<min)
        {
            c++;
            min=n;

        }
        else if(n>max)
        {
           c++;
           max=n;

        }
        if(t>0)
        cin>>n;
    }
    cout<<c<<endl;
}
