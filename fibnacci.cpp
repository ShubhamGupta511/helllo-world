#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int ans;
int fact=1;

for(int i=2;i<=n;i++)
{
  fact=fact*i;
  ans=fact;
  cout<<ans;
}
return 0;
}