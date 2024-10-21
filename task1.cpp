#include <iostream>
using namespace std;

class Shape
{
public:
	virtual double area() const = 0; // Pure virtual function
	virtual ~Shape() {} 
};

class Circle : public Shape 
{
private:
	double radius;
    double PI = 3.14; 

public:
	Circle(double r) : radius(r) {} 

	double area() const override 
	{
		return PI * radius * radius; 
	}
};

class Rectangle : public Shape
{
private:
	double length;
	double width;

public:
	Rectangle(double l, double w) : length(l), width(w) {} 

	double area() const override 
	{
		return length * width; 
	}
};

int main()
{
	double radius = 0;
	cout << "Enter the radius of the circle: ",
	cin >> radius;
	Circle circle(radius); 
	cout << "Area of Circle: " << circle.area() << endl;

	double length = 0;
	double width = 0;
	cout << "Enter the length of the rectangle: ";
	cin >> length;
	cout << "Enter the width of the rectangle: ";
	cin >> width;
	Rectangle rectangle(length, width); 
	cout << "Area of Rectangle: " << rectangle.area() << endl;

	return 0;
}
