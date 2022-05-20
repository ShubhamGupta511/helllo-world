#include<iostream>
using namesace std;
int main()
{
    int Num[15]={10,200,-3,0,12,14,45,67,89,56,21,126,49,1,3};
    cout<<"Num[0]:"<<Num[0]
    cout<<"Num[1]:"<<Num[1]
    cout<<"Num[2]:"<<Num[2]
    cout<<"Num[3]:"<<Num[3]
    cout<<"Num[4]:"<<Num[4]
    cout<<"Num[5]:"<<Num[5]
    cout<<"Num[5]:"<<Num[6]
    cout<<"Num[7]:"<<Num[7]
    cout<<"Num[8]:"<<Num[8]
    cout<<"Num[9]:"<<Num[9]
    cout<<"Num[10]:"<<Num[10]
    cout<<"Num[11]:"<<Num[11]
    cout<<"Num[12]:"<<Num[12]
    cout<<"Num[13]:"<<Num[13]
    cout<<"Num[14]:"<<Num[14]
    if(Num[2]%2==0){
        cout<<"sum of all item a t even [index]"<<Num[0]+Num[2]+Num[4]+Num[6]+Num[8]+Num[10]+Num[12]+Num[14];
    }
    else
   {
        cout<<"sum of all items at odd [index]"<<Num[1]+Num[3]+Num[5]+Num[7]+Num[9]+Num[11]+Num[13];
   }
  return 0;
}