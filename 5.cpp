#include <iostream>
using namespace std;

class Rect
{
    private :
    int area;
    public:
    Rect()

    {
        area = 0;
    }
    Rect (int a, int b)
    {
        area = a*b;
    }
    ~Rect ()
    {
      cout<<"the destructor is used";
    }
    void display()
    {
        cout<<"The ans is"<<area<<endl;
    }
};

int main()
{
    Rect r1;
    Rect r2(5,9);
    r1.display();
    r2.display();
}

