#include<iostream>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==0||n==1||n==2)
        {
        cout<<0<<endl;
        }
        else if(!(n&1))
        {
            cout<<(n/2)-1<<endl;
        }
        else
        {
         cout<<(n/2)<<endl;
        }

    }

}
