#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
cin.ignore();

char arr[n+1];
cin.getline(arr,n);
cin.ignore();

int currlen=0,maxlen=0;
int i=0;

int st=0;
int maxst=0;
while(1)
{
    if(arr[i]==' '||arr[i]=='\0')
    {
        if(currlen>maxlen)
        {
            maxlen=currlen;
            maxst=st;
            
        }
        currlen=0;
        st=i+1;

    }
    else 
    {
    currlen++;
    }
    if(arr[i]=='\0')
    {
        break;
    }
    i++;
}

//bool t=1;
//for(int i=0;i<n;i++)
//{
//    if(arr[i]!=arr[n-1-i])
//    {
//        t=0;
//        break;
//    }
//}
//if(t==1)
//{
//    cout<<"palindrome";
//}
//else
//{
//    cout<<"not palindrome";
//}
cout<<maxlen<<" ";
for(int i=0;i<maxlen;i++)
{
cout<<arr[i+maxst];
}

    return 0;
}