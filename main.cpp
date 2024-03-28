//Arnes KC 03-26-2024 Rectamgle class
#include <iostream>
using namespace std;


class Rectangle
{
private:
  double width;
  double length;
public:
    Rectangle(); //default constructor
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};
Rectangle::Rectangle() //default constructor set initial values of the private member variables
{
  width = 0.0;
  length = 0.0;
}

void Rectangle::setWidth(double w)
{
  width = w; //set the private width member to the value of w
}

void Rectangle::setLength(double l)
{
  length = l; //set the private length member to the value of l
}

double Rectangle::getWidth() const
{
  return width; //return the private member width
}
double Rectangle::getLength() const
{
  return length; //return the private member length
}

double Rectangle::getArea() const
{
  return (width * length); //return the product of width and length
}

class Trapezoid
{
private:
  double RightBase;
  double LeftBase;
  double Height;
public:
    Trapezoid(); //default constructor
    void setRightBase(double);
    void setLeftBase(double);
    void setHeight(double);
    double getRightBase() const;
    double getLeftBase() const;
    double getHeight() const;
    double getArea() const;
};

Trapezoid::Trapezoid() //default constructor set initial values of the private member variables
{
  RightBase = 0.0;
  LeftBase = 0.0;
  Height = 0.0;
}

void Trapezoid::setRightBase(double a)
{
  RightBase = a; //set the private width member to the value of w
}

void Trapezoid::setLeftBase(double b)
{
  LeftBase = b; //set the private length member to the value of l
}

void Trapezoid::setHeight(double h) 
{
  Height = h;
}
double Trapezoid::getRightBase() const
{
  return RightBase; //set the private width member to the value of w
}

double Trapezoid::getLeftBase() const
{
  return LeftBase; //set the private length member to the value of l
}

double Trapezoid::getHeight() const
{
  return Height; //return the private member width
}
double Trapezoid::getArea() const
{
  return (RightBase + LeftBase) * Height / 2; //return the product of width and length
}


int main()
{

    Rectangle r; //r os am omstamce at the Rectamg;e class, an object
  cout << "\nRectangle Program" << endl;
    cout << "Initial value of width: " << r.getWidth() << endl;
    r.setWidth(22.5);
    cout << "Final value of width: " << r.getWidth() << endl;

  cout << "Initial value of length: " << r.getLength() << endl;
  r.setLength(22.5);
  cout << "Final value of length: " << r.getLength() << endl;

  r.getArea();
  cout << "Area of Rectangle: " << r.getArea() << endl;

  Trapezoid t;
  cout << "\nTrapezoid Program" << endl;
  cout << "Initial value of RightBase: " << t.getRightBase() << endl;
  t.setRightBase(10.1);
  cout << "Final value of RightBase: " << t.getRightBase() << endl;
  cout << "Initial value of LeftBase: " << t.getLeftBase() << endl;
  t.setLeftBase(5.2);
  cout << "Final value of LeftBase: " << t.getLeftBase() << endl;
  cout << "Initial value of Height: " << t.getHeight() << endl;
  t.setHeight(12.8);
  cout << "Final value of Height: " << t.getHeight() << endl;
  t.getArea();
  cout << "Area of Trapezoid: " << t.getArea() << endl;
  
    
  
  return 0;
}