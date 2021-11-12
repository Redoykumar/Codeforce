#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=s.find('h');
    if(a<(s.length()))
    {
        int b=0;
        for(int i =a+1; i<s.length(); i++)
        {
            if(s[i]=='e')
            {
                b=i;
                break;
            }
        }
        if(b!=0)
        {
            int c=0;
            for(int i =b+1; i<s.length(); i++)
            {
                if(s[i]=='l')
                {
                    c=i;
                    break;
                }
            }
            if(c!=0)
            {
                int d=0;
                for(int i =c+1; i<s.length(); i++)
                {
                    if(s[i]=='l')
                    {
                        d=i;
                        break;
                    }
                }
                if(d!=0)
                {
                    int e=0;
                    for(int i =d+1; i<s.length(); i++)
                    {
                        if(s[i]=='o')
                        {
                            e=i;
                            break;
                        }
                    }
                    if(e!=0)
                    {
                        cout<<"YES"<<endl;
                        return 0;


                    }


                }


            }

        }
    }
    cout<<"NO"<<endl;



}
