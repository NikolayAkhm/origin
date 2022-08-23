#include <iostream>
#include<string>

class Figure
{
public:
	Figure(std::string name, int sides)
	{
		_name = name;
		_sides = sides;
	}

	std::string  getName() {
		return _name;
	}
	int getSides() {
		return _sides;
	}
private:
	std::string _name;
	int _sides;
};

class Triangle :public Figure
{
public:
	Triangle(std::string name, int sides) : Figure(name, sides) {};
private:
};

class Quadrangle :public Figure
{
public:
	Quadrangle(std::string name, int sides) : Figure(name, sides) {};
private:
};

int main()
{
	Figure figure("figure", 0);
	Triangle triangle("triangle", 3);
	Quadrangle quadrangle("quadrangle", 4);
	
	std::cout << "number of sides" << "\n";
	std::cout << figure.getName() << ": " << figure.getSides()<< "\n";
	std::cout << triangle.getName() << ": " << triangle.getSides() << "\n";
	std::cout << quadrangle.getName() << ": " << quadrangle.getSides() << "\n";

	return 0;
}