#include <iostream>
using namespace std;

class Shape {
      public:
      void shape (){
      cout <<"This is a shape"<<endl;
      }
};
class Polygon: public Shape
{
  public:
     void polygon()
     {
       cout <<"Polygon is a shape"<<endl;
     }
};
class Rectangle: public Polygon
{
  public:
     void rectangle()
     {
      cout<<"Rectangle is a polygon"<<endl;
     }
};
class Triangle: public Polygon 
{
  public:
     void triangle()
     {
      cout<<"Triangle is a polygon"<<endl;
     }
};
class Square: public Rectangle 
{
  public:
     void square()
     {
      cout<<"Square is a rectangle"<<endl;
     }
};
  int main()
  {
      Square S1;
      Triangle T1;
      
      S1.square();
      S1.rectangle();
      S1.polygon();
      S1.shape();
      T1.triangle();
      
      
      return 0;
  }
  
    
  
      
    