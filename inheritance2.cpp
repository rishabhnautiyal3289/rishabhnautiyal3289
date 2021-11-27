#include<iostream>
using namespace std;
class A
{
 public:
   int x;
   int y;
 public:
  A(int a, int b)
{
  x=a;
  y=b;
}
 A(int i)
 {
  x=y=i;
   }
  A()
 {
  x=y=0;
   }
};
class B:public A{
  public :
  int z;
   B(int a, int b, int c):A(a,b)
{
  z=c;
}
   B(int a, int b):A(a)
{
  z=b;
}
   B():A()
{
  z=0;
}
void display()
{
  cout<<"class b is public\n";
  cout<<"public member x is accessible \n"<<x;
  cout<<"protected member y is accessible\n"<<y;
  cout<<" Private member z is  accessible\n"<<z;

}
};
/*class C: protected B{
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
*/
int main()
{
  B obj1(10,20,30);
  obj1.display();
  B obj2(5,9);
  obj2.display();
  B obj3;
  obj3.display();
return 0;
   

}
