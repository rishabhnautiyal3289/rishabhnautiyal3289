#include<iostream>
using namespace std;
class ClassA{
 public:
  int a;
};

class ClassB: public ClassA{
 public:
 int b;
};
class ClassC: public ClassA{
  public :
   int c;
 
};
 class ClassD : public ClassB, public ClassC{
  public:
    int d;

};
int main()
{
  ClassD obj;
  //obj.a=10;
  //obj.a=100;
  obj.ClassB::a=10;
  obj.ClassC::a=100;
  obj.b=20;
  obj.c=30;
  obj.d=40;
  cout<<"\n A from ClassB :"<<obj.ClassB::a;
  cout<<"\n A from ClassC :"<<obj.ClassC::a;
  cout<<"\n B : "<<obj.b;
   cout<<"\n B : "<<obj.c;
   cout<<"\n B : "<<obj.d;
 
return 0;
  }

