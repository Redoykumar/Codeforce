#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int h,w,p=1,s=0;
    cin>>h>>w;
    for(long long int i=1; i<=w; i++)
    {
        long long int a;
        cin>>a;
        if(p<a)
        {
            s+=(a-p);
            p=a;
        }
        else if(p>a)
        {
            s+=(a+(h-p));
            p=a;
        }

    }
    cout<<s<<endl;

}
