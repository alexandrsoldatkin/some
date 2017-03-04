#include <iostream>
using namespace std;

class Shape
{
public:
	virtual void draw() = 0;	 
};

class Rectangle : public Shape
{
public:
	void draw()
	{
		cout<<"Rectangle draw()"<<endl;
	}
};

class Triangle : public Shape
{
public:
	void draw()
	{
		cout<<"Triangle draw()"<<endl;
	}
};

class Circle : public Shape
{
public:
	void draw()
	{
		cout<<"Circle draw()"<<endl;
	}
};





void main()
{
	setlocale(0, "rus");	 

	Shape* data[5] = {new Rectangle(), new Triangle(), new Circle(), new Triangle(), new Rectangle()};

	for (int i = 0; i < 5; i++)
	{
		data[i]->draw();
	}

	for (int i = 0; i < 5; i++)
	{
		delete data[i];
	}

}