#include <iostream>
#include <string>
#include <fstream>

class Addres
{
private:
	std::string city_;
	std::string street_;
	int houseNumber_;
	int apartmentNumber_;
public:
	std::string GetCity() { return city_; }
	std::string GetStreet() { return street_; }
	int GetHouseNumber() { return houseNumber_; }
	int GetApartmentNumber() { return apartmentNumber_; }

	void SetCity(std::string city) {
		city_ = city;
	}

	void SetStreet(std::string street) {
		street_ = street;
	}

	void SetHouseNumber(int houseNumber) {
		houseNumber_ = houseNumber;
	}

	void SetApartmentNumber(int apartmentNumber) {
		apartmentNumber_ = apartmentNumber;
	}

	Addres(std::string city, std::string street, int houseNumber, int apartmentNumber)
	{
		city_ = city;
		street_ = street;
		houseNumber_ = houseNumber;
		apartmentNumber_ = apartmentNumber;
	};
}

int main()
{
	std::ifstream fin("in.txt");
	int size;
	fin >> size; // Открыли файл и поместили первый символ в размер первого массива
	if (!fin.is_open())
	{
		std::cout << "error\n";
	}
	int* int_ptr1;
	int_ptr1 = create_array(sizeArr1);
	int buf1;
	for (int i = sizeArr1 - 1; i > -1; i--)
	{
		fin >> buf1;
		int_ptr1[i] = buf1;
	}
	std::cout << "arr 1" << std::endl;
}
