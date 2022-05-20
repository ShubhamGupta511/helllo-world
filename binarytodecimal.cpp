#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[20];
    int rem;
    int i=0;
    while(n<=0)
    {
        rem=n%2;
        n/=2;
        a[i]=rem;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    { 
        int p=a[j];
        cout<<p<<" ";
    }
    return 0;
}