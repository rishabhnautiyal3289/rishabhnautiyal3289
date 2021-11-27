#include<iostream>
using namespace std;
class A
{
 public:
   int x;
 protected:
   int y;
 private :
   int z;
 public:
  A()
{
  x=1;
  y=2;
  z=3;
}
};
class B:public A{
  public :
B()
{
  cout<<"class b is public\n";
  cout<<"public member x is accessible \n"<<x;
  cout<<"protected member y is accessible\n"<<y;
  cout<<" Private member z is not accessible\n";

}
};
class C: protected B{
 public:
  C()
  {
   cout<<"Class A is protected\n";
  cout<<"protected member x is accessible\n "<<x;
  cout<<"protected member y is accessible\n"<<y;
  cout<<" Private member z is not accessible\n";
}
};
class D: private C{
   public:
     D()

  {
   cout<<"Class A is protected\n";
  cout<<"private  member x not is accessible\n "<<x;
  cout<<"private member y  not is accessible\n"<<y;
  cout<<" Private member z is not accessible\n";
  }
};

int main()
{
 D obj;
return 0;
}


