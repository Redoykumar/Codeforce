#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,x;
    cin>>y;


    int a,b,c,d;


    while(1)
    {
        y++;
        x=y;
        d=y%10;
        y/=10;
        c=y%10;
        y/=10;
        b=y%10;
        y/=10;
        a=y%10;
        y/=10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        {

            break;
        }
        y=x;

    }
    cout<<x<<endl;

}
