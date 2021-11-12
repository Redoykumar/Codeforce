#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    string s;
    int a[1024],j=0;
    cin>>s;
    for(int i =0; i<s.length(); i+=2)
    {
        a[j++]=(int)s[i];
    }
    sort(a,a+j);
    for(int i =0; i<j; i++)
    {
        if(i==0)
        {
            printf("%c",a[i]);
        }
        else
        {
            printf("+%c",a[i]);
        }
    }
    cout<<endl;
}

