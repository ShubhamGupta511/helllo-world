 #include<iostream>
using namespace std;
class base
{
  public:
  virtual void print()
  {
    cout<<"base class print function";
  }
  void display()
  {
    cout<<"base class display function";

  }
};
class derived : public base
{
  void print()
  {
    cout<<"derived class print function";
  }
  void display()
  {
    cout<<" display class print function";
  }
};

int main()
{
  base *baseptr;
  derived d;
  baseptr= &d;
  baseptr->print();cout<<endl;
  baseptr->display();
  return 0;
}

// class complex
// {
//   public:
//   int real;
//   int image;
//   complex(int r=0,int i=0)
//   {
//     real =r;
//     image= i;

//   }
//   complex operator + (complex const &obj)
//   {
//     complex res;
//     res.image=image+obj.image;
//     res.real= real+obj.real;
//     return res;
//   }

//   void display()
//   {
//   cout<<real<<"+"<<image<<"i"<<endl;
//   }
// };
// int main()
// {
//   complex c1(12,7),c2(6,7);
//   complex c3=c1+c2;
//   c3.display();

// }

// #include<iostream>
// using namespace std;
// int getBit(int n,int pos)
// {
//   return ((n&(1<<pos))!=0);
// }


// int setBit(int n,int pos)
// {
// return (n|(1<<pos));
// }
// int clearBit(int n,int pos)
// {
//   int mask=~(1<<pos);
//   return (n & mask);
// }
// int main()
// {
// cout<<clearBit(5,2)<<endl;
// return 0;
// }