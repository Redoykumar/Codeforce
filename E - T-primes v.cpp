#include<bits/stdc++.h>
using namespace std;
bool isp(long long int n)
{
    if(n<=1)
    {
        return false;
    }
    else if(n==2)
    {
        return true;
    }
    else if(!(n&1))
    {
        return false ;
    }
    for(int i =3; i*i<=n; i+=2)
    {
        if(n%i==0)
        {
            return false ;
        }
    }
    return true ;
}
int main()
{
    long long int  t;
    cin>>t;
    while(t--)
    {
        long long int  n ;
        cin>>n;
        long long int  p=(int)sqrt(n);
        if(n==1)
        {
            cout<<"NO"<<endl;
        }
        else if(p*p==n&&isp(p))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}
