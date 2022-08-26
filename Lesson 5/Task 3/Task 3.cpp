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
		std::cout << test() << "\n";
		std::cout << "sides:\ta = " << getPa() << "\tb = " << getPb() << "\tc = " << getPc() << "\n";
		std::cout << "angles:\tA = " << getPA() << "\tB = " << getPB() << "\tC = " << getPC() << "\n\n";
	};

	std::string test() {
		if (((getPA() + getPB() + getPC()) == 180) &&
			getPa() > 0 && getPb() > 0 && getPc() > 0)
		{
			return "correctly";
		}
		else
		{
			return "not correct";
		}
	}


private:

	int _a = 0;
	int _b = 0;
	int _c = 0;
	int _A = 0;
	int _B = 0;
	int _C = 0;
	std::string _name = "Triangle";

};
//тут есть
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
		std::cout << test() << "\n";
		std::cout << "sides:\ta = " << getPa() << "\tb = " << getPb() << "\tc = " << getPc() << "\td = " << getPd() << "\n";
		std::cout << "angles:\tA = " << getPA() << "\tB = " << getPB() << "\tC = " << getPC() << "\tD = " << getPD() << "\n\n";
	};

	std::string test() {
		if (((getPA() + getPB() + getPC() + getPD()) == 360) &&
			getPa() > 0 && getPb() > 0 && getPc() > 0 && getPd() > 0)
		{
			return "correctly";
		}
		else
		{
			return "not correct";
		}
	}



private:
	int _a = 0;
	int _b = 0;
	int _c = 0;
	int _d = 0;
	int _A = 0;
	int _B = 0;
	int _C = 0;
	int _D = 0;
	std::string _name = "Quadrangle";
};

//тут есть

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
	std::string test() {
		if (((getPA() + getPB() + getPC()) == 180) &&
			getPa() > 0 && getPb() > 0 && getPc() > 0
			&& getPC() == 90)
		{
			return "correctly";
		}
		else
		{
			return "not correct";
		}
	}
private:
};
//тут есть
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
	std::string test() {
		if (((getPA() + getPB() + getPC()) == 180) &&
			(getPa() > 0 && getPb() > 0 && getPc() > 0) &&
			(getPa() == getPc()) && (getPA() == getPC()))
		{
			return "correctly";
		}
		else
		{
			return "not correct";
		}
	}
private:
};
//тут есть
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
	std::string test() {
		if ((getPa() == getPb()) && (getPa() == getPc()) &&
			(getPa() > 0 && getPb() > 0 && getPc() > 0) &&
			(getPA() == 60) && (getPB() == 60) && (getPC() == 60))
		{
			return "correctly";
		}
		else
		{
			return "not correct";
		}
	}
private:
};
//тут есть
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

	std::string test() {
		if (((getPA() + getPB() + getPC() + getPD()) == 360) &&
			(getPA() == 90) && (getPB() == 90) && (getPC() == 90) &&
			getPa() > 0 && getPb() == getPa() && getPc() == getPa() && getPd() == getPa()
			)
		{
			return "correctly";
		}
		else
		{
			return "not correct";
		}
	}

private:
};
//тут есть
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

	std::string test() {
		if (((getPA() + getPB() + getPC() + getPD()) == 360) &&
			(getPA() == getPC()) && (getPB() == getPD()) &&
			getPa() > 0 && getPc() == getPa() && getPb() == getPd() && getPd() > 0
			)
		{
			return "correctly";
		}
		else
		{
			return "not correct";
		}
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
		setName("Rhombus");
	}

	std::string test() {
		if (((getPA() + getPB() + getPC() + getPD()) == 360) &&
			((getPA() == getPC()) && (getPB() == getPD())) &&
			getPa() > 0 && getPb() == getPa() && getPc() == getPa() && getPd() == getPa()
			)
		{
			return "correctly";
		}
		else
		{
			return "not correct";
		}
	}

private:
};

int main()
{

	Triangle t(1, 2, 3, 90, 45, 45);
	t.PrintAll();

	Right r(1, 2, 3, 45, 45);
	r.PrintAll();

	Isosceles i(1, 2, 45, 90);
	i.PrintAll();


	Equilateral e(1);
	e.PrintAll();

	Quadrangle q(1, 2, 3, 4, 90, 90, 90, 90);
	q.PrintAll();

	Square s(10);
	s.PrintAll();

	Parallelogram p(10, 20, 20, 160);
	p.PrintAll();

	Rhombus h(10, 20, 160);
	h.PrintAll();

	return 0;
}