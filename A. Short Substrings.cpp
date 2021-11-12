#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        string s,s1;
        cin>>s;
        s1=s[0];
        for(int i =1; i<s.size(); i++)
        {
            s1+=s[i];
            if(s[i]==s[i+1])
            {
                i++;
            }


        }
        cout<<s1<<endl;
    }
}
