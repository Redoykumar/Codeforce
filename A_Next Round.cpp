#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long int  n,m,c=0;
    cin>>n>>m;
    long long int  a[n];
    for(long long int  i =0; i<n; i++)
    {
        cin>>a[i];
    }
    for(long long int  i =0; i<n; i++)
    {
       if(a[i]>=a[m-1]&&a[i]>0)
       {
       c++;
       }
    }

    cout<<c<<endl;

}
