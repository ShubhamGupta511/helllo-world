#include<bits/stdc++.h>
using namespace std;

long long merge(int arr[],int l,int mid,int r)
{ long long inv=0;
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;i++;
        }
        else
        {
            arr[k]=b[j];
            inv+=n1-i;
            k++;j++;
        }
    }
      
    
     while(i<n1)
        {
           arr[k]=a[i];
            k++;i++; 
        }
    while(j<n2)
        {
            arr[k]=b[j];
            k++;j++;
       }
    
return inv;
}
long long mergeSort(int arr[],int l,int r)
{ long long inv=0;
 if(l<r)
 {
   int mid=(l+r)/2;
   inv+= mergeSort(arr,l,mid);
   inv+= mergeSort(arr,mid+1,r);
   inv+= merge(arr,l,mid,r);

 } 
 return inv;
}
int32_t main()
{
   int n; cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<<mergeSort(arr,0,n-1);
    return 0;
    
}
//void wavesort(int arr[],int n)
//{
//    for(int i=1;i<n;i+=2)
//    {
//        if(arr[i]>arr[i-1])
//        {
//            swap(arr[i],arr[i-1]);
//        }
//        if(arr[i]>arr[i+1]&&i<=n-2)
//        {
//            swap(arr[i],arr[i+1]);
//        }
//    }
//}
//int main()
//{
//    int arr[]={1,3,4,7,5,6,2};
//    wavesort(arr,7);
//    for(int i=0;i<7;i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    return 0;
//}

//void dnfsort(int arr[],int n)
//{
//    int low=0;
//    int mid=0;
//    int high=n-1;
//    while(mid<=high)
//    {
//        if(arr[mid]==0)
//        {
//            swap(arr[low],arr[mid]);
//            low++; mid++;
//        }
//        else if(arr[mid]==1)
//        {
 //           mid++;
//        }
//        else
//        {
 //           swap(arr[mid],arr[high]);
//            high--;
//        }
//    }
//}
//int main()
//{
//    int arr[]={1,0,1,2,2,1,0,2,1};
//    dnfsort(arr,9);
//for(int i=0;i<9;i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    return 0;
//}

//void countsort(int arr[],int n)
//{
//    int k=arr[0];
//    for(int i=0;i<n;i++)
//    {
//        k=max(k,arr[i]);
//    }
//    int count[10]={0};
//    for(int i=0;i<n;i++)
//    {
//        count[arr[i]]++;
//    }
//    for(int i=1;i<=k;i++)
//    {
//        count[i]+=count[i-1];
//    }
//    int output[n];
//    for(int i=n-1;i>=0;i--)
//    {
//        output[--count[arr[i]]]=arr[i];
//    }
//    for(int i=0;i<n;i++)
//    {
//        arr[i]=output[i];
//   }
//}
//int main()
//{
//    int arr[]={1,0,1,2,2,1,0,2,1};
//    dnfsort(arr,9);
//for(int i=0;i<9;i++)
//  /  {
//        cout<<arr[i]<<" ";
//    }
//    return 0;
//}