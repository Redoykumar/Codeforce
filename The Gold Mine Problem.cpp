#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int n=2;
int gold(int r,int c)
{
    string s="";
    for(int j=1; j<r; j++)
    {

        for(int i=0; i<c; i++)
        {
            if(i==0)
            {
                dp[i][j]=dp[i][j]+max(dp[i][j-1],dp[i+1][j-1]);
            }
            else if(j==r-1)
            {
                dp[i][j]=dp[i][j]+max(dp[i][j-1],dp[i-1][j-1]);
            }
            else
            {
                dp[i][j]=dp[i][j]+max(dp[i][j-1],max(dp[i-1][j-1],dp[i+1][j-1]));
            }

        }
    }
    int m=dp[0][c-1],p=0,q=c-1;
    for(int i =0; i<r; i++)
    {
        if(dp[i][c-1]>m)
        {
            m=dp[i][c-1];
            p=i;
            q=c-1;
        }

    }


    for(int j =r-1; j>=0; j--)
    {
        for(int i=c-1; i>=0; i--)
        {
            if(i==p&&j==q)
            {
                s="{"+to_string(p)+" "+to_string(q)+"} "+s;
                if(i==0)
                {
                    if(dp[i][j-1]>=dp[i+1][j-1])
                    {
                        p=i;
                        q=j-1;

                    }
                    else
                    {
                        p=i+1;
                        q=j-1;

                    }
                }
                else if(i=r-1)
                {
                    if(dp[i][j-1]>=dp[i-1][j-1])
                    {
                        p=i;
                        q=j-1;

                    }
                    else
                    {
                        p=i-1;
                        q=j-1;

                    }

                }
                else
                {

                    if(dp[i][j-1]>=dp[i+1][j-1]&&dp[i][j-1]>=dp[i-1][j-1])
                    {
                        p=i;
                        q=j-1;

                    }
                    else if(dp[i-1][j-1]>=dp[i][j-1]&&dp[i-1][j-1]>=dp[i+1][j-1])
                    {
                        p=i-1;
                        q=j-1;

                    }
                    else if(dp[i+1][j-1]>=dp[i][j-1]&&dp[i+1][j-1]>=dp[i-1][j-1])
                    {
                        p=i+1;
                        q=j-1;

                    }

                }
            }
        }

    }

    cout<<"Path :"<<s<<endl<<endl;
    return m;


}


int main()
{
    int r,c;
    cout<<"Enter row : ";
    cin>>r;
    cout<<"Enter column : ";
    cin>>c;
     cout<<"Enter values : \n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
        cin>>dp[i][j];
        }

    }


    cout<<"Max value :"<<gold(r,c)<<endl<<endl;
    cout<<"DP table:"<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
        cout<<dp[i][j]<<" ";
        }
        cout<<endl;

    }
}
