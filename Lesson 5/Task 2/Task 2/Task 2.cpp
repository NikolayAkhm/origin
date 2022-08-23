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
private:
	int _a, _b, _c, _A, _B, _C;
};

class Quadrangle
{
public:

	Quadrangle(int a, int b, int c, int _d, int A, int B, int C, int D) {
	_a = a;
	_b = b;
	_c = c;
	_d = d;
	_A = A;
	_B = B;
	_C = C;
	_D = D;
}
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
private:
	int _a, _b, _c, _d, _A, _B, _C, _D;
};

int main()
{

	return 0;
}