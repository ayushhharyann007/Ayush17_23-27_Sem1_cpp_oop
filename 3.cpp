//to read and print student info
#include <iostream>
using namespace std;
class Shape
{
  public:
  string name;
  string gender;
  string emailid;
  string phonenumber;
  string classX;
  string father;
  string mother;
  string prefrence;


  void setname(int n)
  {
   cout<<" enter the value of name ";
    cin>>name;
   name=n;
  }
  void set( int g)
  {
     gender=g;
  }

  void setemailid( int id)
  {
    cout<<" enter the value of emailid";
     cin>>emailid;
     emailid=id;
  }

  void phonenumber( int phonenumber)
  {
    cout<<" enter the value of phonenumber ";
    cin>>phonenumber;
    phonenumber=phonenumber;
  }

  void setclassX( int X)
  {
    cout<<" enter the value of classX ";
    cin>>classX;
    classX=X;
  }

  void setfather( int father)
  {
    cout<<" enter the value of father ";
    cin>>father;
     father=father;
  }

  void setmother( int mother)
  {
    cout<<" enter the value of mother ";
    cin>>mother;
     mother=mother;
  }

  void setpreference( int preference)
  {

     mother=mother;
  }

}


//derived class
class Rectangle:public Shape
{
  public:
  int ()
  {
    return();
  }
};