#include<iostream>
using namespace std;
 int arrayindex(int arr[],int n,int i,int key)
 {   if(i==n)
  {
      return -1;
  }
     if(arr[i]==key)
     {
         return i;
     
     }
     return arrayindex(arr,n,i+1,key);
 }
 int lastoccur(int arr[],int n,int i,int key)
 {
      if(i==n)
  {
      return -1;
  }
     int index=lastoccur(arr,n,i+1,key);
     if(index!=-1)
     {
         return index;
         
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
 }
 int main()
 {
     int i;
     int arr[]={2,4,5,6,7,8,7,9};
     cout<<arrayindex(arr,7,0,7)<<endl;
     cout<<lastoccur(arr,7,0,7)<<endl;
     return 0;

 }