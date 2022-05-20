#include<iostream>
using namespace std;
//nqueen
bool isSafe(int** arr, int x, int y, int n)
{
    for(int row=0;row<x;row++)
    {
        if(arr[row][y]==1)
        {
            return false;
        }
    }
    int row=x;
    int col=y;
    while(row>=0 && col>=0)
    {
        if(arr[row][col]==1)
        {
            return false;
        }
        row--;
        col--;
    }
     row=x;
     col=y;
    while(row>=0 && col<n)
    {
        if(arr[row][col]==1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}
bool nQueen(int** arr,int x,int n)
{
    if(x>=n)
    {
    return true;
    }
    for(int col=0;col<n;col++)
    {
      if(isSafe(arr,x,col,n))
      {
          arr[x][col]=1;
          if(nQueen(arr,x+1,n))
          {
              return true;
          }
         arr[x][col]=0;
      }
    }
    return false;

}
int main()
{
    int n;
    cin>>n;
    int **arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }
    if(nQueen(arr,0,n))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;

}

//bool isSafe(int **arr,int x,int y,int n)
//{
//if(x<n && y<n && arr[x][y]==1)
//{
//    return true;
//}
//return false;
//}
//bool ratinMaze(int** arr,int x,int y,int n,int** solarr)
//{
//    if((x==(n-1)) && (y==(n-1)))
//    {
//        solarr[x][y]=1;
//        return true;
//    }
//    if(isSafe(arr,x,y,n))
//    {
//        solarr[x][y]=1;
//        if(ratinMaze(arr,x+1,y,n,solarr))
//        {
//            return true;
//        }
//         if(ratinMaze(arr,x,y+1,n,solarr))
//         {
//             return true;
//}
//         solarr[x][y]=0;
//         return false;
//    }
//    return false;
//}
//int main()
//{
//    int n;
//    cin>>n; 
//int** arr=new int*[n];
 //   for(int i=0;i<n;i++)
 //   {
 //       arr[i]=new int[n];
 //   }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            cin>>arr[i][j];
//        }
//    }
//    int** solarr=new int*[n];
//    for(int i=0;i<n;i++)
//    {
//        solarr[i]=new int[n];
//        for(int j=0;j<n;j++)
//        {
//            solarr[i][j]=0;
//        }
//    }
//  if(ratinMaze(arr,0,0,n,solarr))
//    {
//        for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            cout<<solarr[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//  }
//    return 0;
//}