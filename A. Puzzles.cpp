#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,m;
    cin>>n>>m;
    int a[m];
    for(int i =0 ;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    int mi=10001;
    for(int i =0;i+n-1<m;i++)
    {
       mi= min(mi,a[i+n-1]-a[i]);
    }
    cout<<mi<<endl;
}
