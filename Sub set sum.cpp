#include<bits/stdc++.h>
using namespace std;
bool dp[1000][1000];

bool c(int a[],int n,int w)
{

    for(int i =0;i<n;i++)
    {
        for(int j =0;j<=w;j++)
        {
            if(i==0&&j==0)
            {
                dp[i][j]=true;
            }
            else if(i==0)
            {
                 dp[i][j]=false;
            }
            else if(a[i]>j)
            {
                 dp[i][j]= dp[i-1][j]|false;
            }
            else
            {
                 dp[i][j]= dp[i-1][j]| dp[i-1][j-a[i]];
            }


        }
    }
    return dp[n-1][w];

}
int main()
{
    int w,n;
    cin>>n;

     int a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
      cin>>a[i];
    }
    cin>>w;
    cout<<c(a,n,w)<<endl;
    for(int i =0 ;i<n;i++)
    {
        for(int j=0 ;j<=w;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

}
