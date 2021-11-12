#include<iostream>
using namespace std;
int main()
{

    string s;
    int f=0,c=0;
    cin>>s;


        for(long long int i=0; i<s.length(); i++)
        {
            if(s[i]=='4'||s[i]=='7')
            {
                c++;
            }

        }
        if(c==4||c==7)
        {
            cout<<"YES"<<endl;
        }
        else
        {

         cout<<"NO"<<endl;
        }


}
