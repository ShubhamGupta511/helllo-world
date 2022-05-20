#include<bits/stdc++.h>
using namespace std;
class Complex
{
    private:
    int real; int imag;
    public:
    Complex(int r=0,int i=0)
    {
        real=r;
        imag=i;
    }
    Complex operator + (Complex const &obj)
    {
        Complex res;
        res.imag=imag + obj.imag;
        res.real =real + obj.real; 
        return res;
    }
    void display()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
}; 
class base 
{
    public:
     virtual void print()
    {
        cout<<"this is base class's print function"<<endl;
    }
    void display()
    {
        cout<<"this is base class's dislay function"<<endl;
    }
};
class derived:public base
{
    public:
    void print()
    {
        cout<<"this is derived class's print function"<<endl;

    }
    void display()
    {
        cout<<"this is derived class's display function"<<endl;
    }

};
int32_t main()
{
    base *baseptr;
    derived d;
    baseptr=&d;
    baseptr->print();
    baseptr->display();
    Complex c1(4,10),c2(4,5);
    Complex c3=c1+c2;
    c3.display(); 
    return 0;
}






//class apnacollege//function overloading
//{
//    public:
//   void func()
//   {
//       cout<<"function with no arguments"<<endl;
//   }
//   void func(int x)
//   {
//       cout<<"function with int agument"<<endl;
//   }
//   void func(double y)
//   {
//       cout<<"function with long argument"<<endl;
//   }
//};
//int main()
//{
 //   apnacollege A;
 //   A.func();
 //   A.func(4);
 //   A.func(6.2);
 //   return 0;
//}

//class A
//{
//    public:
//    int a;
//    void funcA()
//    {
//        cout<<"funcA";
//    }
//    private:
//    int b;
//    void funcB()
//    {
//        cout<<"funcB";
//    }
//    protected:
//    int c;
//    void funcC()
//    {
//        cout<<"funcC";
//    }
//};
//int main()
//{
//    A obj;
//    obj.funcA();
//    obj.funcB();
//    return 0;
//}