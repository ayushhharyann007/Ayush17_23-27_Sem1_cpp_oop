#include <iostream>
using namespace std;
//base class
 class Shape
{
  public:
  int width;
  int height;
  void setwidth(int w)
  {
    width=w;
  }
  void setheight( int h)
  {
     height=h;
  }
};
//derived class
class Rectangle:public Shape
{
  public:
  int getArea()
  {
    return(width*height);
  }
};
int main()
{
    Rectangle Rect;
    Rect.setwidth(10);
    Rect.setheight(20);
    cout<<"Total area:"<<Rect.getArea()<<endl;
    return 0;
}