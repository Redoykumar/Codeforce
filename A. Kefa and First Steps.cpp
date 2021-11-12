#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,c=1,m=1;
    cin>>n;
    long long int a[n];
    cin>>a[0];
    for(int i =1; i<n; i++)
    {
        cin>>a[i];
        if(a[i-1]<=a[i])
        {
            c++;

        }
        else
        {
          c=1;
        }
          m=max(m,c);

    }
    cout<<m<<endl;


}
