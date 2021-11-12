#include<bits/stdc++.h>
using namespace std;
vector <vector<int>> dp (1000,vector<int>(1000,-1));
int sub (int a[],int s,int v)
{
    if(s==0&&v==0)
    {
        return 1;
    }
    else if (s==0)
    {
        return 0;
    }
     else if(dp[s][v]!=-1&&dp[s][v]==0||dp[s][v]==1)
    {

        return dp[s][v];
    }
    else if(s>v)
    {
        dp[s][v]=sub(a,s-1,v)|0;
        return dp[s][v];
    }

    else
    {

       dp[s][v]=sub(a,s-1,v)|sub(a,s-1,(v-a[s]));
       return dp[s][v];
    }

}

int main()
{

    int s,v;
    cout<<"Enter number subset : ";
    cin>>s;
    s;
    int a[s+1];
    a[0]=0;
    cout<<"Enter subset value : "<<endl;
    for(int i =1;i<=s;i++)
    {
        cin>>a[i];
    }
    cout<<"Total value : "<<endl;
    cin>>v;

    if(sub(a,s,v))
    {

        cout<<"Subset sum possible."<<endl;
    }
    else
    {
         cout<<"Subset sum not possible."<<endl;

    }
    cout<<"DP matrix : "<<endl;
    for(int i =0 ;i<=s;i++)
    {
        for(int j=0 ;j<=v;j++)
        {
            if(dp[i][j]==0||dp[i][j]==1)
            {
              cout<<"   "<<dp[i][j];
            }
            else
            cout<<"  "<<dp[i][j];
        }
        cout<<endl;
    }

}

