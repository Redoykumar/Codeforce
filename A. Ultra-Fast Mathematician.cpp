#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int s[s1.length()];
    for(int i =0;i<s1.length();i++)
    {
        s[i]= (int)s1[i]^(int)s2[i];
    }
    for(int i =0;i<s1.length();i++)
    {
        printf("%d",s[i]);
    }
    cout<<endl;
}
