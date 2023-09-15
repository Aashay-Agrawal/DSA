#include <iostream>
using namespace std;

class Shape
{
public:
  void shape_name()
  {
    cout << "Shape" << endl;
  }
};

class Square : public Shape
{
public:
  void shape_name()
  {
    cout << "Square" << endl;
  }
};

int main()
{

  Shape shape;
  Square square;

  shape.shape_name();

  square.shape_name();

  return 0;
}