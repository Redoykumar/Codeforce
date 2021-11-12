#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>k>>n;
        int r=k%n;
        int s=n/2;
        if(r>s)
        {
        k=k-(r-s);
        }
        cout<<k<<endl;


    }

}
