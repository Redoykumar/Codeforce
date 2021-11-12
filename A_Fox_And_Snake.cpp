#include<iostream>
using namespace std;
int main()
{
    int a,b,f=0,f1=0;
    cin>>a>>b;
    for(int t=0; t<a; t++)
    {
        if(f==0)
        {
            for(int j=0; j<b; j++)
            {
                cout<<"#";
            }
            cout<<endl;

            f=1;

        }
        else
        {
            if(f1==0)
            {
                for(int i=0; i<b; i++)
                {
                    if(i==b-1)
                    {
                        cout<<"#";

                    }
                    else
                    {
                        cout<<".";
                    }

                }
                cout<<endl;
                f1=1;
            }
            else
            {
                for(int i=0; i<b; i++)
                {
                    if(i==0)
                    {
                        cout<<"#";

                    }
                    else
                    {
                        cout<<".";
                    }

                }
                cout<<endl;
                f1=0;


            }

            f=0;
        }

    }

}
