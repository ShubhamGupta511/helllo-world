#include<bits/stdc++.h>
using namespace std;

bool check(int x,int y,int z)
{
    int a;
    a=max(x, max(y,z));
    int b;int c;
    if(a == x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        a=x;
        b=y;
    }
    if(a*a=b*b+c*c)
     return true;
     else
    return false;
}       

int32_t main()
{
int x,y,z;
cin>>x>>y>>z;
if(check(x,y,z))
{
    cout<<"pythagorian triplet";
}
else
{
    cout<<"not a pythagorian triplet";
}
return 0;
}