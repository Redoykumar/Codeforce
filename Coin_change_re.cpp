#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int way(int c[],int n,int m)
{
    if(n==0&&m==0)
    {
        return 1;
    }
    else if(n==0)
    {
        return 0;
    }
    else if(dp[n][m]!=0)
    {
          cout<<"read me "<<endl;
        return dp[n][m];
    }
    else if(n>m)
    {
        dp[n][m]= way(c,n-1,m);
        return dp[n][m];
    }
    else
    {
        dp[n][m]= way(c,n-1,m)+way(c,n,m-c[n]);
        return dp[n][m];
    }
}
int main()
{


    int money,cNumber;
    cout<<"Enter Total Amount : ";
    cin>>money;
    cout<<"Enter Number of coin : ";
    cin>>cNumber;
    int coin[cNumber+1];
    cout<<"Enter coin value : ";
    for(int i =1;i<=cNumber;i++)
    {
        cin>>coin[i];
    }

    cout<<"Number of way : "<<way(coin,cNumber,money)<<endl;
     for(int i =0 ;i<=cNumber;i++)
    {
        for(int j=0 ;j<=money;j++)
        {

            cout<<"  "<<dp[i][j];
        }
        cout<<endl;
    }

}
