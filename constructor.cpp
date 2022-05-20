#include<iostream>
using namespace std;
 
class complex 
{
    int a,b;
    public:
    complex(void); //contructor declaration
    
        void printnumber()
        {
            cout<<"your number is"<<a<<"+"<<b<<"i"<<endl;
        }
};
   
    complex :: complex(void)
    {
        a=10;
        b=0;
    
    }


int main()
{
    complex c1,c2,c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    return 0;
}
// constructor should be in public section of the class.
// they are automatically invoked whenevr the object is created.
// they cannot return values do not have return type.
// it can have default arguments.
// we cannot refer to their address.