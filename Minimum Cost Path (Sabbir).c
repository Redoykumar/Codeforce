#include<stdio.h>
int a[10000][10000];
int min(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    else
    {

        return b;
    }
}
void path(int r,int c)
{
    if(c==0)
    {
        printf("{%d %d} ->",r,c);
        return ;
    }
    if(r==0)
    {
        path(r,c-1);
        printf("{%d %d} ->",r,c);
    }
   else  if(a[r-1][c]<a[r][c-1])
    {

        path(r-1,c);
        printf("{%d %d} ->",r,c);
    }
    else
    {

         path(r,c-1);
          printf("{%d %d} ->",r,c);
    }
}

int minCost(int r,int c)
{
    for(int i =0; i<r; i++)
    {
        for(int j=1; j<c; j++)
        {
            if(i ==0)
            {
                a[i][j]=a[i][j-1]+ a[i][j];
            }
            else
            {

                a[i][j]=min(a[i-1][j],a[i][j-1])+a[i][j];
            }
        }
    }

    path(r-1,c-1);
    return a[r-1][c-1];
}

int main()
{
    int r,c;
    scanf("%d%d",&r,&c);

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
              scanf("%d",&a[i][j]);

        }
    }
    printf("\n\n");
    for(int i =0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }
      printf("\n");
        printf(" Minimum Cost :%d \n",minCost(r,c));

    for(int i =0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ",a[i][j]);
        }
       printf("\n");
    }



}

