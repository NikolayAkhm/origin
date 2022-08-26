#include <iostream>
#include<string>

class Triangle
{
public:
	Triangle(int a, int b, int c, int A, int B, int C) {
		_a = a;
		_b = b;
		_c = c;
		_A = A;
		_B = B;
		_C = C;
	}
	Triangle() {};

	int getPa() {
		return _a;
	}
	int getPb() {
		return _b;
	}
	int getPc() {
		return _c;
	}
	int getPA() {
		return _A;
	}
	int getPB() {
		return _B;
	}
	int getPC() {
		return _C;
	}

	void setPa(int a) {
		_a = a;
	}
	void setPb(int b) {
		_b = b;
	}
	void setPc(int c) {
		_c = c;
	}
	void setPA(int A) {
		_A = A;
	}
	void setPB(int B) {
		_B = B;
	}
	void setPC(int C) {
		_C = C;
	}
	void setName(std::string name) {
		_name = name;
	}

	void PrintAll()
	{

		std::cout << _name << " :\n";
		std::cout << "sides:\ta = " << getPa() << "\tb = " << getPb() << "\tc = " << getPc() << "\n";
		std::cout << "angles:\tA = " << getPA() << "\tB = " << getPB() << "\tC = " << getPC() << "\n\n";
	};

private:

	int _a = 0;
	int _b = 0;
	int _c = 0;
	int _A = 0;
	int _B = 0;
	int _C = 0;
	std::string _name = "Triangle";

};

class Quadrangle
{
public:

	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
		_a = a;
		_b = b;
		_c = c;
		_d = d;
		_A = A;
		_B = B;
		_C = C;
		_D = D;
	}
	Quadrangle() {}

	int getPa() {
		return _a;
	}
	int getPb() {
		return _b;
	}
	int getPc() {
		return _c;
	}
	int getPd() {
		return _d;
	}
	int getPA() {
		return _A;
	}
	int getPB() {
		return _B;
	}
	int getPC() {
		return _C;
	}
	int getPD() {
		return _D;
	}
	std::string getName() {
		return _name;
	}

	void setPa(int a) {
		_a = a;
	}
	void setPb(int b) {
		_b = b;
	}
	void setPc(int c) {
		_c = c;
	}
	void setPd(int d) {
		_d = d;
	}
	void setPA(int A) {
		_A = A;
	}
	void setPB(int B) {
		_B = B;
	}
	void setPC(int C) {
		_C = C;
	}
	void setPD(int D) {
		_D = D;
	}
	void setName(std::string name) {
		_name = name;
	}


	void PrintAll()
	{

		std::cout << _name << " :\n";
		std::cout << "sides:\ta = " << getPa() << "\tb = " << getPb() << "\tc = " << getPc() << "\td = " << getPd() << "\n";
		std::cout << "angles:\tA = " << getPA() << "\tB = " << getPB() << "\tC = " << getPC()<< "\tD = " << getPD() << "\n\n";
	};


private:
	int _a = 0;
	int _b = 0;
	int _c = 0;
	int _d = 0;
	int _A = 0;
	int _B = 0;
	int _C = 0;
	int _D = 0;
	std::string _name;
};

class Right : public Triangle {

public:
	Right(int a, int b, int c, int A, int B)
	{
		setPa(a);
		setPb(b);
		setPc(c);
		setPA(A);
		setPB(B);
		setPC(90);
		setName("Right triangle");
	}
private:
};

class Isosceles : public Triangle {

public:
	Isosceles(int a, int b, int A, int C)
	{
		setPa(a);
		setPb(b);
		setPc(a);
		setPA(A);
		setPB(A);
		setPC(C);
		setName("Isosceles triangle");
	}
private:
};

class Equilateral : public Triangle {

public:
	Equilateral(int a)
	{
		setPa(a);
		setPb(a);
		setPc(a);
		setPA(60);
		setPB(60);
		setPC(60);
		setName("Equilateral triangle");
	}
private:
};

class Square : public Quadrangle {

public:
	Square(int a)
	{
		setPa(a);
		setPb(a);
		setPc(a);
		setPd(a);
		setPA(90);
		setPB(90);
		setPC(90);
		setPD(90);
		setName("Square");
	}
private:
};

class Parallelogram : public Quadrangle {

public:
	Parallelogram(int a, int b, int A, int B)
	{
		setPa(a);
		setPb(b);
		setPc(a);
		setPd(b);
		setPA(A);
		setPB(B);
		setPC(A);
		setPD(B);
		setName("Parallelogram");
	}
private:
};

class Rhombus : public Quadrangle {

public:
	Rhombus(int a, int A, int B)
	{
		setPa(a);
		setPb(a);
		setPc(a);
		setPd(a);
		setPA(A);
		setPB(B);
		setPC(A);
		setPD(B);
		setName("Parallelogram");
	}
private:
};

int main()
{

	Triangle t(1, 2, 3, 4, 5, 6);
	t.PrintAll();

	Right r(1,2,3,4,5);
	r.PrintAll();

	Isosceles i(1, 2, 3, 4);
	i.PrintAll();

	Quadrangle q(1, 2, 3, 4, 5, 6, 7, 8);
	q.PrintAll();

	Equilateral e(1);
	e.PrintAll();

	Square s(10);
	s.PrintAll();

	Parallelogram p(10, 20, 20, 70);
	p.PrintAll();


	
	return 0;
}