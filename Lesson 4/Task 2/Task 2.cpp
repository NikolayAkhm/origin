#include <iostream>
#include <string>
#include <fstream>

void sortingAlf(Addres* A, int n);
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
	}
	Addres()
	{
		city_ = 1;
		street_ = 1;
		houseNumber_ = 1;
		apartmentNumber_ = 1;
	}

};

int main()
{
	std::ifstream fin("in.txt");
	int size;
	if (!fin.is_open())
	{
		std::cout << "error\n";
	}
	else
	{
		fin >> size;
		Addres* arr = new Addres[size];

		for (int i = 0; i < size; i++)
		{
			std::string stringBuf;
			fin >> stringBuf;
			arr[i].SetCity(stringBuf);
			fin >> stringBuf;
			arr[i].SetStreet(stringBuf);
			int intBuf;
			fin >> intBuf;
			arr[i].SetHouseNumber(intBuf);
			fin >> intBuf;
			arr[i].SetApartmentNumber(intBuf);
		}
		for (int i = 0; i < size; i++)
		{
			std::string stringBuf;
			fin >> stringBuf;
			arr[i].SetCity(stringBuf);
			fin >> stringBuf;
			arr[i].SetStreet(stringBuf);
			int intBuf;
			fin >> intBuf;
			arr[i].SetHouseNumber(intBuf);
			fin >> intBuf;
			arr[i].SetApartmentNumber(intBuf);
		}

		std::ofstream fout;
		fout.open("out.txt");
		for (int i = 0; i < size; i++)
		{
			fout << arr[i].GetCity() << ", " << arr[i].GetStreet() << ", " <<
				arr[i].GetHouseNumber() << ", " << arr[i].GetApartmentNumber() << "\n";
			int intBuf;
		}
		delete[]arr;
	}
	return 0;
}
void sortingAlf(Addres* A, int n)
{
	Addres temp;
	int top, seek;
	for (top = 0; top < n - 1; top++)
	{
		for (seek = top + 1; seek < n; seek++)
		{
			if (strcmp(A[top].LastName, A[seek].LastName) > 0)
			{
				temp = A[top];
				A[top] = A[seek];
				A[seek] = temp;
			}
		}
	}
}