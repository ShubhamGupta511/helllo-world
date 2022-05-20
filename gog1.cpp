#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,j;
    cin>>a;
    while(a--)
    {
        
        int b;
        cin>>b;
        int arr[b];
        int barr[b];
        int srr[b];
        for(j=0;j<b;j++)
        {
            cin>>arr[j];
        }
        for(j=0;j<b;j++)
        {
            cin>>barr[j];
        }
        for(j=0;j<b;j++)
        {
            srr[j]=arr[j]*20-barr[j]*10;
            if(srr[j]<0)
            {
                srr[j]=0;
            }
        }
        int m=0;
        for(j=0;j<b;j++)
        {
            m=max(m,srr[j]);
        }
  cout<<m<<endl;
        
}

return 0;
}