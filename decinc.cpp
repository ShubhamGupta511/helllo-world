#include<bits/stdc++.h>
using namespace std;
int dec(int n)
{
    if(n==1)
    {
     cout<<"1"<<endl;
     return n;
   }   
    cout<<n<<endl;
    dec(n-1);

}
int inc(int n)
{
    if(n==1)
    {
        cout<<"1"<<endl;
        return n;
    }
    
    inc(n-1);
    cout<<n<<endl;
    
}
int main()
{
    int n;
    cin>>n;
   inc(n);
   dec(n);

    return 0;
}
