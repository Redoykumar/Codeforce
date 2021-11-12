#include<bits/stdc++.h>
using namespace std;
bool s(long long a,long long b)
{
    return a>b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,sum=0,m=0;
    cin>>n;
    long long a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n,s);
     for(int i =0;i<n;i++)
    {

        m+=a[i];
        if(sum-m<m)
        {
            cout<<i+1<<endl;
            break;
        }
    }
}
