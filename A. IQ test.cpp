#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,in,c=0,c1=0,p;
    cin>>n;
    int a[n];
    for(int i =0 ;i<n;i++)
    {
        cin>>a[i];
        if(a[i]&1)
        {
            c++;
            if(c==1)
            {
                in=i;
            }

        }
        else
        {
            c1++;
            if(c1==1)
            {
                p=i;
            }

        }

    }
     if(c<c1)
       {
         cout<<in+1<<endl;
       }
       else
       {
           cout<<p+1<<endl;
       }


}
