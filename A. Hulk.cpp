#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i =1; i<=n; i++)
    {
        if(i&1)
        {
            if(i==n&&i==1)
            {
                cout<<"I hate it";
            }
            else if(i==n)
            {
                cout<<" I hate it";
            }

            else if (i>1)
            {
                cout<<" I hate that";
            }
            else
                cout<<"I hate that";

        }
        else
        {

             if(i==n)
            {
                cout<<" I love it";
            }

            else
                cout<<" I love that";
        }

    }
    cout<<endl;
}
