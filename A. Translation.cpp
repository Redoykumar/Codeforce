#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int f=1;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]!=s2[(s1.length())-i-1])
        {
          f=0;
          break;
        }
    }
    cout<<((f)?"YES":"NO")<<endl;

}
