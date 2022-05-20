#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=size();
        int Min=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(s.size()>2)
            {
                if(s[0]<s[i+1])
                swap(s[0],s[i+1]);
                delete s[n-1];

            }
            else
            {
            swap(s[i],s[i+1]);
          
            }
        }
        cout<<s[0];
    }
}