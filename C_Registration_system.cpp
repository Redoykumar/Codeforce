#include<bits/stdc++.h>
using namespace std;
struct node
{
    int b;
    node* next;
    string s;
};
int main()
{
    int t,f=0;
    cin>>t;
    int d=t;
    node a[d],*h,*head,*ch;
    while(t--)
    {
        string s;
        int e=0;
        cin>>s;

        for(int i=0; i<s.length(); i++)
        {
            e+=((int)s[i]+7);
        }
        int ind=e%d;
        if(a[ind].s=="")
        {
            a[ind].s= s;
            a[ind].b= 0;
            a[ind].next= NULL;
            cout<<"OK"<<endl;

        }
        else
        {
            if(a[ind].s==s)
            {
                a[ind].b++;
                cout<<a[ind].s<<a[ind].b<<endl;
            }
            else
            {


                head = &a[ind];
                while(head->next!=NULL)
                {
                    head=head->next;
                    if(head->s==s)
                    {
                        head->b++;
                        cout<<head->s<<head->b<<endl;

                         f=1;
                        break;
                    }

                }
                if(f==0)
                {

                h =new node;
                h->s=s;
                h->b=0;
                h->next=NULL;
                head->next=h;
                cout<<"OK"<<endl;

                }
                f=0;





            }

        }

    }

}
